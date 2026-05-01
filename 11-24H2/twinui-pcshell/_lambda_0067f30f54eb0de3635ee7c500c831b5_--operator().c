/*
 * XREFs of _lambda_0067f30f54eb0de3635ee7c500c831b5_::operator() @ 0x180311468
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x180101E04 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x18018E378 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 */

void __fastcall lambda_0067f30f54eb0de3635ee7c500c831b5_::operator()(__int64 a1, __int64 a2)
{
  const unsigned __int16 **v2; // rax
  __int64 v4; // rdx
  _DWORD v5[2]; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(const unsigned __int16 ***)a1;
  v6 = 0;
  if ( (int)ApplicationViewManagement::CPersistence::_ReadPersistedData(
              (HKEY *)(a2 + 40),
              *v2,
              L"ShowInSwitchers",
              v5,
              0xCu) >= 0 )
  {
    if ( v5[0] != 4 )
    {
      v4 = 61LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
        (const char *)0x8007000DLL);
      return;
    }
    if ( v5[1] != 1397960752 )
    {
      v4 = 62LL;
      goto LABEL_4;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 216LL) = v6 != 0;
  }
}
