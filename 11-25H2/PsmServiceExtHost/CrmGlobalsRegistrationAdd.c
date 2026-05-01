/*
 * XREFs of CrmGlobalsRegistrationAdd @ 0x18003EA20
 * Callers:
 *     CrmRpcSrvRegister @ 0x18003DF90 (CrmRpcSrvRegister.c)
 *     CrmRegistrationStart @ 0x18003E808 (CrmRegistrationStart.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmGlobalsRegistrationAdd(__int64 a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  CempLockAcquireExclusive((__int64)&unk_1800E9A20);
  v3 = xmmword_1800E9A30;
  if ( (BYTE8(xmmword_1800E9A30) & 1) != 0 && (_QWORD)xmmword_1800E9A30 )
    v3 = (unsigned __int64)&xmmword_1800E9A30 ^ xmmword_1800E9A30;
  LOBYTE(v2) = 0;
  if ( v3 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      if ( v2 < *(_QWORD *)(v3 - 16) )
      {
        v4 = *(_QWORD *)v3;
        if ( (BYTE8(xmmword_1800E9A30) & 1) != 0 )
        {
          if ( !v4 )
          {
LABEL_14:
            LOBYTE(v2) = 0;
            break;
          }
          v4 ^= v3;
        }
        if ( !v4 )
          goto LABEL_14;
      }
      else
      {
        v4 = *(_QWORD *)(v3 + 8);
        if ( (BYTE8(xmmword_1800E9A30) & 1) != 0 )
        {
          if ( !v4 )
          {
LABEL_8:
            LOBYTE(v2) = 1;
            break;
          }
          v4 ^= v3;
        }
        if ( !v4 )
          goto LABEL_8;
      }
      v3 = v4;
    }
  }
  RtlRbInsertNodeEx(&xmmword_1800E9A30, v3, v2, a1 + 32);
  dword_1800E9A28 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800E9A20);
}
