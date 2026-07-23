/*
 * XREFs of SeSecureBootRegisterPolicy @ 0x140C3CA88
 * Callers:
 *     SeCodeIntegrityInitializePolicy @ 0x140C3BC58 (SeCodeIntegrityInitializePolicy.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     SepSecureBootCheckForUpdates @ 0x140C3CD14 (SepSecureBootCheckForUpdates.c)
 *     SepSecureBootSetRegistryKey @ 0x140C3CE24 (SepSecureBootSetRegistryKey.c)
 */

__int64 __fastcall SeSecureBootRegisterPolicy(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // r14
  unsigned int v4; // edx
  unsigned int v5; // ecx
  _WORD *v6; // rbx
  unsigned int *Pool2; // rax
  unsigned int *v8; // rbp
  int v9; // ebx
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ecx
  char v15; // al
  ULONG_PTR v16; // rdx
  unsigned int v17; // r9d
  unsigned int *v18; // rax
  unsigned int *v19; // rbx
  unsigned int v20; // ecx
  unsigned __int64 v21; // r8
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax

  v2 = (unsigned int)BugCheckParameter3;
  if ( (unsigned int)BugCheckParameter3 < 0x10 )
    goto LABEL_36;
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  v5 = *(_DWORD *)(BugCheckParameter2 + 12);
  if ( (v4 == 0) != (v5 == 0)
    || v4 >= (unsigned int)v2
    || v5 >= (unsigned int)v2
    || v5 - 1 <= 0x3E
    || v5 + v4 > (unsigned int)v2 )
  {
    goto LABEL_36;
  }
  v6 = 0LL;
  g_SecureBootPolicyBlobHeader = *(_OWORD *)BugCheckParameter2;
  qword_140E67CF8 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( *(_DWORD *)(BugCheckParameter2 + 12) )
    v6 = (_WORD *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 8));
  SepSecureBootSetRegistryKey(v6);
  if ( (dword_140E67CEC & 8) != 0 )
    SepSecureBootCheckForUpdates();
  if ( v6 )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL, *(unsigned int *)(BugCheckParameter2 + 12), 0x62536553uLL);
    v8 = Pool2;
    if ( !Pool2 )
    {
LABEL_13:
      v9 = -1073741670;
      goto LABEL_37;
    }
    memmove(Pool2, v6, *(unsigned int *)(BugCheckParameter2 + 12));
    qword_140E67CE0 = v8;
    if ( v6[18] || v6[19] )
    {
      qword_140E67D28 = (__int64)v8 + v8[13] + 60;
      v10 = *((unsigned __int16 *)v8 + 18);
      if ( (_WORD)v10 )
      {
        v11 = (__int64)v8 + v8[10] + 60;
        qword_140E67D18 = v11;
        v12 = v10;
        v13 = v11 + 4;
        v14 = dword_140E67D10;
        do
        {
          v15 = *(_BYTE *)(v13 + 3);
          v13 += 12LL;
          v14 |= 1 << (v15 & 0xF);
          --v12;
        }
        while ( v12 );
        dword_140E67D10 = v14;
      }
      if ( *((_WORD *)v8 + 19) )
        qword_140E67D20 = (__int64)v8 + v8[11] + 60;
      if ( *(_DWORD *)BugCheckParameter2 >= 2u )
      {
        v16 = *(unsigned int *)(BugCheckParameter2 + 20);
        if ( (_DWORD)v16 )
        {
          if ( (unsigned int)v16 < (unsigned int)v2 )
          {
            v17 = *(_DWORD *)(BugCheckParameter2 + 16);
            if ( v17 < (unsigned int)v2 && v17 <= (int)v2 - (int)v16 )
            {
              v18 = (unsigned int *)ExAllocatePool2(0x40uLL, v16, 0x62536553uLL);
              v19 = v18;
              if ( !v18 )
                goto LABEL_13;
              memmove(
                v18,
                (const void *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 16)),
                *(unsigned int *)(BugCheckParameter2 + 20));
              v20 = *(_DWORD *)(BugCheckParameter2 + 20);
              if ( v20 >= 0x18 )
              {
                v21 = 276LL * *v19;
                v22 = v20 - 24;
                *((_QWORD *)v19 + 1) = v19 + 6;
                if ( v21 <= 0xFFFFFFFF && v22 >= (unsigned int)v21 )
                {
                  v23 = v22 - v21;
                  v24 = 32LL * v19[1];
                  if ( v24 <= 0xFFFFFFFF && v23 >= (unsigned int)v24 )
                  {
                    *((_QWORD *)v19 + 2) = (char *)v19 + (unsigned int)v21 + 24;
                    LODWORD(g_SecureBootActivePlatformManifestSize) = *(_DWORD *)(BugCheckParameter2 + 20);
                    g_SecureBootActivePlatformManifest = v19;
                    return 0LL;
                  }
                }
              }
            }
          }
LABEL_36:
          v9 = -1069350909;
LABEL_37:
          if ( qword_140E67CE0 )
          {
            ExFreePoolWithTag(qword_140E67CE0, 0);
            qword_140E67CE0 = 0LL;
          }
          KeBugCheckEx(0x145u, v9, BugCheckParameter2, v2, 0LL);
        }
      }
    }
  }
  return 0LL;
}
