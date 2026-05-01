/*
 * XREFs of CrmRegistrationRemoveActivity @ 0x18003190C
 * Callers:
 *     CrmRegistrationCleanup @ 0x180030E84 (CrmRegistrationCleanup.c)
 *     CrmSrvUnregister @ 0x1800646C4 (CrmSrvUnregister.c)
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CrmActivityDereference @ 0x180032160 (CrmActivityDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800557F0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRegistrationRemoveActivity(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rax
  void **v7; // rcx
  int v9; // [rsp+30h] [rbp-29h] BYREF
  __int64 v10; // [rsp+38h] [rbp-21h] BYREF
  char v11[32]; // [rsp+40h] [rbp-19h] BYREF
  UUID *v12; // [rsp+60h] [rbp+7h]
  int v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+6Ch] [rbp+13h]
  __int64 *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  int *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  if ( !a3 )
    CempLockAcquireExclusive(a1);
  v6 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v7 = (void **)a2[1], *v7 != a2) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    RtlReleaseSRWLockExclusive(a1);
  }
  a2[1] = a2;
  *a2 = a2;
  if ( (unsigned int)dword_1800E72E8 > 5 && (qword_1800E72F8 & 2) != 0 && (qword_1800E7300 & 2) == qword_1800E7300 )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v12 = &Uuid;
    v10 = *(_QWORD *)(a1 + 16);
    v15 = &v10;
    v9 = *((_DWORD *)a2 + 17);
    v18 = &v9;
    v13 = 16;
    v16 = 8;
    v19 = 4;
    tlgWriteTransfer_EventWriteTransfer(&dword_1800E72E8, &unk_1800D238C, 0LL, 0LL, 5, v11);
  }
  return CrmActivityDereference(a2);
}
