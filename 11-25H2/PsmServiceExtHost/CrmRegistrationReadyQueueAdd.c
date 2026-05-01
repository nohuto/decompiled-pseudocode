/*
 * XREFs of CrmRegistrationReadyQueueAdd @ 0x18002E944
 * Callers:
 *     CrmActivityUpdate @ 0x18002E120 (CrmActivityUpdate.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRegistrationReadyQueueAdd(__int64 a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 UnbiasedInterruptTimeMs64; // rax
  __int64 v11; // [rsp+30h] [rbp-19h] BYREF
  __int64 v12; // [rsp+38h] [rbp-11h] BYREF
  char v13[32]; // [rsp+40h] [rbp-9h] BYREF
  UUID *v14; // [rsp+60h] [rbp+17h]
  int v15; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+6Ch] [rbp+23h]
  __int64 *v17; // [rsp+70h] [rbp+27h]
  int v18; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+7Ch] [rbp+33h]
  __int64 *v20; // [rsp+80h] [rbp+37h]
  int v21; // [rsp+88h] [rbp+3Fh]
  int v22; // [rsp+8Ch] [rbp+43h]

  RtlAcquireSRWLockExclusive(&unk_1800E9A40);
  dword_1800E9A48 = GetCurrentThreadId();
  if ( !dword_1800E9A80 )
  {
    dword_1800E9A80 = 1;
    TpPostWork(qword_1800E9A78);
  }
  v3 = xmmword_1800E9A50;
  if ( (BYTE8(xmmword_1800E9A50) & 1) != 0 && (_QWORD)xmmword_1800E9A50 )
    v3 = (unsigned __int64)&xmmword_1800E9A50 ^ xmmword_1800E9A50;
  LOBYTE(v2) = 0;
  if ( v3 )
  {
    v2 = *(_QWORD *)(a1 + 128);
    while ( 1 )
    {
      if ( v2 < *(_QWORD *)(v3 + 104) )
      {
        v4 = *(_QWORD *)v3;
        if ( (BYTE8(xmmword_1800E9A50) & 1) != 0 )
        {
          if ( !v4 )
          {
LABEL_22:
            LOBYTE(v2) = 0;
            break;
          }
          v4 ^= v3;
        }
        if ( !v4 )
          goto LABEL_22;
      }
      else
      {
        v4 = *(_QWORD *)(v3 + 8);
        if ( (BYTE8(xmmword_1800E9A50) & 1) != 0 )
        {
          if ( !v4 )
          {
LABEL_10:
            LOBYTE(v2) = 1;
            break;
          }
          v4 ^= v3;
        }
        if ( !v4 )
          goto LABEL_10;
      }
      v3 = v4;
    }
  }
  RtlRbInsertNodeEx(&xmmword_1800E9A50, v3, v2, a1 + 24);
  v5 = *(_QWORD *)(a1 + 48);
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( *(_DWORD *)(a1 + 64) == 1301 )
  {
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
    *(_QWORD *)(a1 + 264) = UnbiasedInterruptTimeMs64;
    *(_QWORD *)(a1 + 288) = UnbiasedInterruptTimeMs64;
    ++*(_DWORD *)(a1 + 352);
    RtlAcquireSRWLockExclusive(&unk_1800E9AF0);
    GetCurrentThreadId();
    ++dword_1800E9B70;
    dword_1800E9AF8 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800E9AF0);
  }
  v6 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v6 + 8) = 0;
  RtlReleaseSRWLockExclusive(v6);
  dword_1800E9A48 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800E9A40);
  result = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(_QWORD *)(result + 16);
  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 1) != 0 )
  {
    result = qword_1800E7300 & 1;
    if ( result == qword_1800E7300 )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v14 = &Uuid;
      v17 = &v11;
      v20 = &v12;
      v11 = v9;
      v18 = 8;
      v12 = v8;
      v21 = 8;
      v15 = 16;
      return tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D178E, 0LL, 0LL, 5, v13);
    }
  }
  return result;
}
