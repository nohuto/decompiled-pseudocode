/*
 * XREFs of AVrfpDetectVerifiedExports @ 0x1800ED1AC
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800ED0D0 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     strlen @ 0x180169260 (strlen.c)
 */

char __fastcall AVrfpDetectVerifiedExports(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  char v3; // si
  __int64 v4; // rbp
  const char **v6; // rbx
  bool v7; // zf
  const char *v8; // rcx
  size_t v9; // rax
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  const char *v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD **)(a1 + 24);
  v3 = 0;
  LODWORD(v4) = 0;
  if ( *v2 )
  {
    v6 = *(const char ***)(a1 + 24);
    do
    {
      v13 = 0LL;
      v7 = v6[1] == 0LL;
      v11 = 0LL;
      if ( v7 )
      {
        v8 = *v6;
        *((_QWORD *)&v11 + 1) = v8;
        if ( v8 )
        {
          v9 = strlen(v8);
          if ( v9 >= 0xFFFF )
            LOWORD(v9) = -2;
          LOWORD(v11) = v9;
          WORD1(v11) = v9 + 1;
        }
        if ( (int)LdrGetProcedureAddressForCaller(*(_QWORD *)(a2 + 48), (const void **)&v11, 0, &v13, 1, retaddr) >= 0 )
        {
          v6[1] = v13;
          if ( (AVrfpDebug & 2) != 0 )
            DbgPrint("AVRF: (%ws) %s export found. \n", *(_QWORD *)(a2 + 96), *v6);
          v3 = 1;
        }
        else if ( (AVrfpDebug & 2) != 0 )
        {
          DbgPrint("AVRF: warning: did not find `%s' export in %ws . \n", *v6, *(_QWORD *)(a2 + 96));
        }
      }
      v4 = (unsigned int)(v4 + 1);
      v6 = (const char **)&v2[3 * v4];
    }
    while ( *v6 );
  }
  return v3;
}
