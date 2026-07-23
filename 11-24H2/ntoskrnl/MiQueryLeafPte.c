/*
 * XREFs of MiQueryLeafPte @ 0x1403C9790
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x140311220 (MiIdentifyPfnWrapper.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  char v24; // dl
  unsigned __int64 v25; // rax
  unsigned int v26; // r8d
  _KPROCESS *v27; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  _KPROCESS *v32; // r9
  unsigned __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rbx

  v3 = *(_QWORD *)(a1 + 184);
  v4 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v4 >= qword_140E2F3C8 )
  {
    v35 = qword_140E2F3E0;
    if ( !qword_140E2F3E0 )
    {
      v35 = 276840448LL;
      qword_140E2F3F0 = 0x10000000LL;
      qword_140E2F3E0 = 276840448LL;
      qword_140E2F3E8[0] = 276824064LL;
    }
    if ( v4 < v35 + qword_140E2F3C8 )
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
      v9 = dword_140E2DC04;
      v10 = 0xAAAAAAAAAAAAAAABuLL * (v5 >> 4);
      if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
        || (v11 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v10 < *(_QWORD *)v11)
        || dword_140E2DC00 != dword_140E2DC04 && v10 >= *((_QWORD *)v11 + 2) )
      {
        for ( i = 0; ; i = v13 + 1 )
        {
          while ( 1 )
          {
            if ( v9 < i )
              KeBugCheckEx(0x1Au, 0x5180uLL, v10, 0LL, 0LL);
            v13 = (i + v9) >> 1;
            v11 = (char *)qword_140E2DC60 + 16 * v13;
            if ( v10 >= *(_QWORD *)v11 )
              break;
            if ( !v13 )
              KeBugCheckEx(0x1Au, 0x5180uLL, v10, (ULONG_PTR)qword_140E2DC60, 0LL);
            v9 = v13 - 1;
          }
          if ( v13 == dword_140E2DC04 || v10 < *((_QWORD *)v11 + 2) )
            break;
        }
        dword_140E2DC00 = (i + v9) >> 1;
      }
      v14 = 256LL;
      *(_QWORD *)(v8 - 8) = ((unsigned __int64)*((unsigned int *)v11 + 2) << 9) ^ (*(_QWORD *)(v8 - 8) ^ ((unsigned __int64)*((unsigned int *)v11 + 2) << 9)) & 0xFFFFFFFFFFFFF1FFuLL;
      if ( v6[5] >= 0 )
        v14 = 0LL;
      *(_QWORD *)(v8 - 8) = v14 | *(_QWORD *)(v8 - 8) & 0xFFFFFFFFFFFFFEFFuLL;
      if ( v6[5] >= 0 )
      {
        v15 = *(_QWORD *)(v8 - 8) & 0xFFFFFFFFFFFFFF1FuLL;
        *(_QWORD *)(v8 - 8) = v15;
        v16 = (unsigned int)((unsigned __int64)v6[2] >> 5);
        v17 = v15 ^ (unsigned int)v16;
LABEL_19:
        *(_QWORD *)(v8 - 8) = v16 ^ v17 & 0xFFFFFFFFFFFFFFE0uLL;
        return 0LL;
      }
      if ( (*(_DWORD *)v3 & 2) != 0 )
      {
        v19 = *(_QWORD *)(v8 - 8) & 0xFFFFFFFFFFFFF11FuLL | 0xE0;
      }
      else
      {
        if ( (v6[3] & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v36 = v6[3] & 0x3FFFFFFFFFFFFFFFLL;
        else
          v36 = 7LL;
        v19 = (32 * v36) ^ (*(_QWORD *)(v8 - 8) ^ (32 * v36)) & 0xFFFFFFFFFFFFFF1FuLL;
      }
      *(_QWORD *)(v8 - 8) = v19;
      v20 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v21 = *(_QWORD *)v20;
      if ( v20 < 0xFFFFF6FB7DBED000uLL || v20 > 0xFFFFF6FB7DBED7F8uLL )
      {
        v22 = *(_QWORD *)v20;
        v23 = v21 >> 60;
      }
      else
      {
        if ( (v21 & 1) != 0 && ((v21 & 0x42) == 0 || (v21 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v30 = *(_QWORD *)(KernelWaitTime + 8 * ((v20 >> 3) & 0x1FF));
              if ( (v30 & 0x20) != 0 )
                v21 |= 0x20uLL;
              v31 = v21 | 0x42;
              if ( (v30 & 0x42) == 0 )
                v31 = v21;
              v21 = v31;
            }
          }
        }
        v22 = *(_QWORD *)v20;
        v23 = v21 >> 60;
        v24 = *(_QWORD *)v20;
        if ( (v22 & 1) != 0 && ((v22 & 0x42) == 0 || (v22 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          v32 = KeGetCurrentThread()->ApcState.Process;
          if ( v32->AddressPolicy != 1 )
          {
            v33 = v32[2].KernelWaitTime;
            if ( v33 )
            {
              v34 = *(_QWORD *)(v33 + 8 * ((v20 >> 3) & 0x1FF));
              if ( (v34 & 0x20) != 0 )
                v24 = v22 | 0x20;
              LOBYTE(v22) = v24 | 0x42;
              if ( (v34 & 0x42) == 0 )
                LOBYTE(v22) = v24;
            }
          }
        }
      }
      v25 = v23 & 7;
      if ( (_DWORD)v25 )
      {
        if ( (v22 & 0x18) == 8 )
        {
          v25 = (unsigned int)v25 | 0x18;
        }
        else
        {
          if ( (v22 & 0x10) == 0 )
          {
LABEL_40:
            v16 = (unsigned int)v25;
            v17 = *(_QWORD *)(v8 - 8) ^ v25;
            goto LABEL_19;
          }
          v25 = (unsigned int)v25 | 8;
        }
      }
      if ( !(_DWORD)v25 )
      {
        v26 = (*((_DWORD *)v6 + 4) >> 5) & 0x1F;
        if ( (v6[5] & 0x10000000000LL) == 0 && v6[1] > 0 )
        {
          v37 = (unsigned int)MmMakeProtectNotWriteCopy[v26];
          v16 = (unsigned int)v37;
          v17 = *(_QWORD *)(v8 - 8) ^ v37;
          goto LABEL_19;
        }
        v27 = KeGetCurrentThread()->ApcState.Process;
        if ( v27[1].IdealProcessorAssignmentBlock )
        {
          if ( MiLocateCloneAddress(v27, v6[1] | 0x8000000000000000uLL) )
            v26 = MmMakeProtectNotWriteCopy[v26];
        }
        v25 = v26;
      }
      goto LABEL_40;
    }
  }
  else
  {
    if ( v6[5] >= 0 )
      return 0LL;
    v38 = *(_QWORD *)(v3 + 16) + 1LL;
    *(_QWORD *)(v3 + 16) = v38;
    if ( v38 < *(_QWORD *)(v3 + 24) )
    {
      v39 = 32 * v38 + *(_QWORD *)(v3 + 8);
      MiIdentifyPfnWrapper(v5 - 0x220000000000LL, (_QWORD *)(v39 - 32));
      *(_QWORD *)(v39 - 8) = v4;
      return 0LL;
    }
  }
  return 5LL;
}
