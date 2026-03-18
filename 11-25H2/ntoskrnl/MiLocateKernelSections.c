/*
 * XREFs of MiLocateKernelSections @ 0x140C4A550
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall MiLocateKernelSections(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  int v3; // r8d
  unsigned int *v4; // rdx
  unsigned int v5; // r9d
  unsigned int v6; // r10d
  unsigned __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v8 = 0LL;
  RtlImageNtHeaderEx(1, v1, 0LL, &v8);
  result = *(unsigned __int16 *)(v8 + 20);
  v3 = *(unsigned __int16 *)(v8 + 6);
  v4 = (unsigned int *)(result + v8 + 24);
  if ( *(_WORD *)(v8 + 6) )
  {
    do
    {
      result = *v4;
      v5 = v4[4];
      v6 = v4[2];
      if ( (_DWORD)result == 1987011374 || (_DWORD)result == 1953655086 )
      {
        MiFlags |= 0x400uLL;
      }
      else if ( (_DWORD)result == 1280266064 )
      {
        v7 = v1 + v4[3];
        if ( v4[1] == 1162104643 )
        {
          ExPoolCodeStart = v1 + v4[3];
          if ( v5 < v6 )
            v5 = v6;
          result = v5;
          ExPoolCodeEnd = ((v5 + v7 + 4095) & 0xFFFFFFFFFFFFF000uLL) - 1;
        }
      }
      --v3;
      v4 += 10;
    }
    while ( v3 > 0 );
  }
  return result;
}
