/*
 * XREFs of RtlQueryProcessModuleInformation @ 0x180099F54
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800698A0 (LdrQueryProcessModuleInformationEx2.c)
 *     LdrQueryProcessModuleInformationEx @ 0x18006A0E0 (LdrQueryProcessModuleInformationEx.c)
 *     RtlpCommitQueryDebugInfo @ 0x18009B130 (RtlpCommitQueryDebugInfo.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1801205CC (RtlpDeCommitQueryDebugInfo.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessModuleInformation(void **a1, unsigned int a2, _QWORD *a3)
{
  unsigned __int64 v5; // rdi
  int v6; // r15d
  unsigned int ProcessModuleInformationEx2; // eax
  unsigned int v8; // r10d
  unsigned __int64 v9; // rax
  unsigned int v10; // r12d
  _WORD *DebugInfo; // rax
  _WORD *v12; // rbx
  int v13; // eax
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF
  size_t Size; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0;
  LODWORD(Size) = 0;
  v5 = (a1 == 0LL ? 2 : 0) | (unsigned __int64)((a2 >> 6) & 1);
  v6 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx2(a1, v5, 0LL, 0, (unsigned int *)&Size);
  else
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx(a1, v5, 0LL, 0, (unsigned int *)&Size);
  v8 = ProcessModuleInformationEx2;
  if ( ProcessModuleInformationEx2 == -1073741820 )
  {
    v9 = 0LL;
    v10 = Size;
    if ( a3[11] >= a3[9] )
      v9 = a3[11] - a3[9];
    if ( v9 < (unsigned int)Size )
      return 3221225507LL;
    DebugInfo = (_WORD *)RtlpCommitQueryDebugInfo(a3, (unsigned int)Size);
    v12 = DebugInfo;
    if ( DebugInfo )
    {
      memset_thunk_772440563353939046(DebugInfo, 0, v10);
      if ( v6 )
        v13 = LdrQueryProcessModuleInformationEx2(a1, v5, v12, Size, &v15);
      else
        v13 = LdrQueryProcessModuleInformationEx(a1, v5, v12, Size, &v15);
      if ( v13 >= 0 )
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
