/*
 * XREFs of CrmRegistrationStart @ 0x18003E788
 * Callers:
 *     CrmSrvRegister @ 0x18003DBE0 (CrmSrvRegister.c)
 *     CrmRegistrationStartWithActivity @ 0x18006E3D4 (CrmRegistrationStartWithActivity.c)
 * Callees:
 *     CrmLogRegistrationStart @ 0x18003E814 (CrmLogRegistrationStart.c)
 *     CempStringDuplicate @ 0x18003E8E0 (CempStringDuplicate.c)
 *     CrmGlobalsRegistrationAdd @ 0x18003E9A0 (CrmGlobalsRegistrationAdd.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 */

__int64 __fastcall CrmRegistrationStart(__int64 a1, void *a2, int a3, __int64 a4)
{
  signed __int64 v7; // rax
  ULONG v8; // eax

  v7 = _InterlockedIncrement64(&qword_1800EA9B0);
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 16) = v7;
  if ( a2 )
  {
    v8 = RtlLengthSid(a2);
    memcpy_0((void *)(a1 + 72), a2, v8);
  }
  *(_QWORD *)(a1 + 144) = CempStringDuplicate(a4);
  CrmGlobalsRegistrationAdd(a1);
  CrmLogRegistrationStart(a1);
  return 0LL;
}
