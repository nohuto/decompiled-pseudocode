/*
 * XREFs of CrmGlobalsRegistrationAdd @ 0x18003E9A0
 * Callers:
 *     CrmRpcSrvRegister @ 0x18003DF10 (CrmRpcSrvRegister.c)
 *     CrmRegistrationStart @ 0x18003E788 (CrmRegistrationStart.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall CrmGlobalsRegistrationAdd(__int64 a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  CempLockAcquireExclusive((__int64)&unk_1800EA9C0);
  v3 = xmmword_1800EA9D0;
  if ( (BYTE8(xmmword_1800EA9D0) & 1) != 0 && (_QWORD)xmmword_1800EA9D0 )
    v3 = (unsigned __int64)&xmmword_1800EA9D0 ^ xmmword_1800EA9D0;
  LOBYTE(v2) = 0;
  if ( v3 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      if ( v2 < *(_QWORD *)(v3 - 16) )
      {
        v4 = *(_QWORD *)v3;
        if ( (BYTE8(xmmword_1800EA9D0) & 1) != 0 )
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
        if ( (BYTE8(xmmword_1800EA9D0) & 1) != 0 )
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
  RtlRbInsertNodeEx(&xmmword_1800EA9D0, v3, v2, a1 + 32);
  dword_1800EA9C8 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800EA9C0);
}
