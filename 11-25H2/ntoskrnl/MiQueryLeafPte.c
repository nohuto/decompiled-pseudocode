/*
 * XREFs of MiQueryLeafPte @ 0x1403DE2A0
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x140220FB0 (MiIdentifyPfnWrapper.c)
 *     MiLocateCloneAddress @ 0x1403DE800 (MiLocateCloneAddress.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiQueryLeafPte(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rdi
  __int64 v5; // r8
  __int64 *v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // r11
  int v9; // edx
  ULONG_PTR v10; // r8
  char *v11; // rax
  int i; // r10d
  int v13; // ecx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  _KPROCESS *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  char v33; // dl
  _KPROCESS *v34; // r9
  unsigned __int64 v35; // r8
  __int64 v36; // r8
  unsigned __int64 v37; // rcx
  __int64 v38; // rbx

  v3 = *(_QWORD *)(a1 + 184);
  v4 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v4 >= qword_140E2F048 )
  {
    v26 = qword_140E2F060;
    if ( !qword_140E2F060 )
    {
      v26 = 276840448LL;
      qword_140E2F070 = 0x10000000LL;
      qword_140E2F060 = 276840448LL;
      qword_140E2F068 = 276824064LL;
    }
    if ( v4 < v26 + qword_140E2F048 )
      return 0LL;
  }
  if ( a3 >= 1 || (*a2 & 1) == 0 )
    return 0LL;
  v5 = 48 * ((*a2 >> 12) & 0xFFFFFFFFFFLL);
  v6 = (__int64 *)(v5 - 0x220000000000LL);
  if ( (*(_DWORD *)v3 & 1) != 0 )
  {
    v7 = *(_QWORD *)(v3 + 16) + 1LL;
    *(_QWORD *)(v3 + 16) = v7;
    if ( v7 < *(_QWORD *)(v3 + 24) )
    {
      v8 = *(_QWORD *)(v3 + 8) + 8 * v7;
      *(_QWORD *)(v8 - 8) ^= (v4 ^ *(_QWORD *)(v8 - 8)) & 0xFFFFFFFFFFFFF000uLL;
      v9 = dword_140E2D884;
      v10 = 0xAAAAAAAAAAAAAAABuLL * (v5 >> 4);
      if ( dword_140E2D880 > (unsigned int)dword_140E2D884
        || (v11 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, v10 < *(_QWORD *)v11)
        || dword_140E2D880 != dword_140E2D884 && v10 >= *((_QWORD *)v11 + 2) )
      {
        for ( i = 0; ; i = v13 + 1 )
        {
          while ( 1 )
          {
            if ( v9 < i )
              KeBugCheckEx(0x1Au, 0x5180uLL, v10, 0LL, 0LL);
            v13 = (i + v9) >> 1;
            v11 = (char *)qword_140E2D8E0 + 16 * v13;
            if ( v10 >= *(_QWORD *)v11 )
              break;
            if ( !v13 )
              KeBugCheckEx(0x1Au, 0x5180uLL, v10, (ULONG_PTR)qword_140E2D8E0, 0LL);
            v9 = v13 - 1;
          }
          if ( v13 == dword_140E2D884 || v10 < *((_QWORD *)v11 + 2) )
            break;
        }
        dword_140E2D880 = (i + v9) >> 1;
      }
      *(_QWORD *)(v8 - 8) = ((unsigned __int64)*((unsigned int *)v11 + 2) << 9) ^ (*(_QWORD *)(v8 - 8) ^ ((unsigned __int64)*((unsigned int *)v11 + 2) << 9)) & 0xFFFFFFFFFFFFF1FFuLL;
      *(_QWORD *)(v8 - 8) = ((unsigned __int64)v6[5] >> 55) ^ (*(_QWORD *)(v8 - 8) ^ ((unsigned __int64)v6[5] >> 55)) & 0xFFFFFFFFFFFFFEFFuLL;
      if ( v6[5] >= 0 )
      {
        v14 = *(_QWORD *)(v8 - 8) & 0xFFFFFFFFFFFFFF1FuLL;
        *(_QWORD *)(v8 - 8) = v14;
        v15 = (unsigned int)((unsigned __int64)v6[2] >> 5);
        v16 = v14 ^ (unsigned int)v15;
LABEL_17:
        *(_QWORD *)(v8 - 8) = v15 ^ v16 & 0xFFFFFFFFFFFFFFE0uLL;
        return 0LL;
      }
      if ( (*(_DWORD *)v3 & 2) != 0 )
      {
        v18 = *(_QWORD *)(v8 - 8) & 0xFFFFFFFFFFFFF11FuLL | 0xE0;
      }
      else
      {
        if ( (v6[3] & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v28 = v6[3] & 0x3FFFFFFFFFFFFFFFLL;
        else
          v28 = 7LL;
        v18 = (32 * v28) ^ (*(_QWORD *)(v8 - 8) ^ (32 * v28)) & 0xFFFFFFFFFFFFFF1FuLL;
      }
      *(_QWORD *)(v8 - 8) = v18;
      v19 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v20 = *(_QWORD *)v19;
      if ( v19 < 0xFFFFF6FB7DBED000uLL || v19 > 0xFFFFF6FB7DBED7F8uLL )
      {
        v21 = *(_QWORD *)v19;
        v22 = v20 >> 60;
      }
      else
      {
        if ( (v20 & 1) != 0 && ((v20 & 0x42) == 0 || (v20 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v31 = *(_QWORD *)(KernelWaitTime + 8 * ((v19 >> 3) & 0x1FF));
              if ( (v31 & 0x20) != 0 )
                v20 |= 0x20uLL;
              v32 = v20 | 0x42;
              if ( (v31 & 0x42) == 0 )
                v32 = v20;
              v20 = v32;
            }
          }
        }
        v21 = *(_QWORD *)v19;
        v22 = v20 >> 60;
        v33 = *(_QWORD *)v19;
        if ( (v33 & 1) != 0 && ((v21 & 0x42) == 0 || (v21 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          v34 = KeGetCurrentThread()->ApcState.Process;
          if ( v34->AddressPolicy != 1 )
          {
            v35 = v34[2].KernelWaitTime;
            if ( v35 )
            {
              v36 = *(_QWORD *)(v35 + 8 * ((v19 >> 3) & 0x1FF));
              if ( (v36 & 0x20) != 0 )
                v33 = v21 | 0x20;
              LOBYTE(v21) = v33 | 0x42;
              if ( (v36 & 0x42) == 0 )
                LOBYTE(v21) = v33;
            }
          }
        }
      }
      v23 = v22 & 7;
      if ( (_DWORD)v23 )
      {
        if ( (v21 & 0x18) == 8 )
        {
          v23 = (unsigned int)v23 | 0x18;
        }
        else
        {
          if ( (v21 & 0x10) == 0 )
          {
LABEL_32:
            v15 = (unsigned int)v23;
            v16 = *(_QWORD *)(v8 - 8) ^ v23;
            goto LABEL_17;
          }
          v23 = (unsigned int)v23 | 8;
        }
      }
      if ( !(_DWORD)v23 )
      {
        v24 = (*((_DWORD *)v6 + 4) >> 5) & 0x1F;
        if ( (v6[5] & 0x10000000000LL) == 0 && v6[1] > 0 )
        {
          v27 = (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)v24];
          v15 = (unsigned int)v27;
          v16 = *(_QWORD *)(v8 - 8) ^ v27;
          goto LABEL_17;
        }
        v25 = KeGetCurrentThread()->ApcState.Process;
        if ( v25[1].IdealProcessorAssignmentBlock )
        {
          if ( MiLocateCloneAddress(v25, v6[1] | 0x8000000000000000uLL, v24) )
            LODWORD(v24) = MmMakeProtectNotWriteCopy[(unsigned int)v24];
        }
        v23 = (unsigned int)v24;
      }
      goto LABEL_32;
    }
  }
  else
  {
    if ( v6[5] >= 0 )
      return 0LL;
    v37 = *(_QWORD *)(v3 + 16) + 1LL;
    *(_QWORD *)(v3 + 16) = v37;
    if ( v37 < *(_QWORD *)(v3 + 24) )
    {
      v38 = 32 * v37 + *(_QWORD *)(v3 + 8);
      MiIdentifyPfnWrapper(v5 - 0x220000000000LL, (_QWORD *)(v38 - 32));
      *(_QWORD *)(v38 - 8) = v4;
      return 0LL;
    }
  }
  return 5LL;
}
