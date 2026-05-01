/*
 * XREFs of ?IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z @ 0x1801C56A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0be4a072d54d679db2d5c07ef8ed037a_::operator() @ 0x180680D64 (_lambda_0be4a072d54d679db2d5c07ef8ed037a_--operator().c)
 */

__int64 __fastcall CStartExperienceManager::IsWindowFullyVisible(CStartExperienceManager *this, unsigned __int8 *a2)
{
  unsigned __int8 v3; // bl
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 80) != 2
    || (v3 = 1,
        v5[0] = (char *)this + 280,
        v6 = 1,
        v5[1] = &v6,
        lambda_0be4a072d54d679db2d5c07ef8ed037a_::operator()(v5),
        v6) )
  {
    v3 = 0;
  }
  *a2 = v3;
  return 0LL;
}
