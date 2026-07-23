/*
 * XREFs of RtlQueryProcessModuleInformation @ 0x18002A204
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180028C60 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x18002B900 (RtlpCommitQueryDebugInfo.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x18007C780 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18007CFC0 (LdrQueryProcessModuleInformationEx.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x18011CF2C (RtlpDeCommitQueryDebugInfo.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessModuleInformation(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v4; // r14d
  int v5; // edi
  int v6; // r15d
  unsigned int ProcessModuleInformationEx2; // eax
  unsigned int v8; // r10d
  unsigned __int64 v9; // rax
  unsigned int v10; // r12d
  void *DebugInfo; // rax
  void *v12; // rbx
  int ProcessModuleInformation; // eax
  int v15; // [rsp+60h] [rbp+8h] BYREF
  size_t Size; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0;
  LODWORD(Size) = 0;
  v4 = a1;
  v5 = (a1 == 0 ? 2 : 0) | (a2 >> 6) & 1;
  v6 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx2(a1, v5, 0, 0, (__int64)&Size);
  else
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx(a1, v5, 0, 0, (__int64)&Size);
  v8 = ProcessModuleInformationEx2;
  if ( ProcessModuleInformationEx2 == -1073741820 )
  {
    v9 = 0LL;
    v10 = Size;
    if ( a3[11] >= a3[9] )
      v9 = a3[11] - a3[9];
    if ( v9 < (unsigned int)Size )
      return 3221225507LL;
    DebugInfo = (void *)RtlpCommitQueryDebugInfo(a3, (unsigned int)Size);
    v12 = DebugInfo;
    if ( DebugInfo )
    {
      memset_thunk_772440563353939046(DebugInfo, 0, v10);
      if ( v6 )
        ProcessModuleInformation = LdrQueryProcessModuleInformationEx2(v4, v5, (_DWORD)v12, Size, (__int64)&v15);
      else
        ProcessModuleInformation = LdrQueryProcessModuleInformationEx(v4, v5, (_DWORD)v12, Size, (__int64)&v15);
      if ( ProcessModuleInformation >= 0 )
      {
        a3[12] = v12;
        return 0LL;
      }
      RtlpDeCommitQueryDebugInfo(a3, v12, (unsigned int)Size);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v8;
}
