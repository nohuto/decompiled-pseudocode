/*
 * XREFs of LdrpEnclaveAddForwarderModules @ 0x1800D4828
 * Callers:
 *     LdrpLoadEnclaveModule @ 0x1800D4588 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     RtlCharToInteger @ 0x18007A3D0 (RtlCharToInteger.c)
 *     strrchr @ 0x180124B80 (strrchr.c)
 *     LdrpEnclaveAddDependentModule @ 0x180130F84 (LdrpEnclaveAddDependentModule.c)
 */

__int64 __fastcall LdrpEnclaveAddForwarderModules(__int64 a1)
{
  int v2; // ebx
  char *v3; // r15
  char *v4; // rax
  char *v5; // rbp
  unsigned int *v6; // rdi
  unsigned int *v7; // r14
  unsigned __int64 v8; // r12
  char *v9; // rsi
  char *v11; // rax
  bool v12; // zf
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  ULONG Size; // [rsp+60h] [rbp+8h] BYREF

  Size = 0;
  v13 = 0LL;
  v2 = 0;
  v3 = *(char **)(*(_QWORD *)(a1 + 56) + 48LL);
  v4 = (char *)RtlImageDirectoryEntryToData(v3, 1u, 0, &Size);
  v5 = v4;
  if ( v4 )
  {
    v6 = (unsigned int *)&v3[*((unsigned int *)v4 + 7)];
    v7 = &v6[*((unsigned int *)v4 + 5)];
    if ( v6 < v7 )
    {
      v8 = Size;
      do
      {
        v9 = &v3[*v6];
        if ( v9 - v5 < v8 )
        {
          v11 = strrchr(&v3[*v6], 46);
          if ( !v11 )
            return (unsigned int)-1073741701;
          if ( (unsigned __int64)(v11 - v9) > 0xFFFF )
            return (unsigned int)-1073741701;
          v12 = v11[1] == 35;
          *((_QWORD *)&v13 + 1) = v9;
          LOWORD(v13) = (_WORD)v11 - (_WORD)v9;
          WORD1(v13) = (_WORD)v11 - (_WORD)v9;
          if ( v12 && RtlCharToInteger(v11 + 2, 0, &Size) < 0 )
            return (unsigned int)-1073741701;
          v2 = LdrpEnclaveAddDependentModule(a1, &v13);
          if ( v2 < 0 )
            return (unsigned int)v2;
        }
        ++v6;
      }
      while ( v6 < v7 );
    }
  }
  return (unsigned int)v2;
}
