/*
 * XREFs of ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x180055530
 * Callers:
 *     ??0InfoMetadata@@QEAA@XZ @ 0x180055330 (--0InfoMetadata@@QEAA@XZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x180055098 (--$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4I.c)
 *     ??1InputInfoMetadata@InfoMetadata@@QEAA@XZ @ 0x1800555E8 (--1InputInfoMetadata@InfoMetadata@@QEAA@XZ.c)
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z @ 0x180055640 (--0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InfoMetadata::AddInput(
        char **a1,
        int a2,
        const struct InfoMetadata::InputInfoMetadata *a3,
        const char *a4)
{
  char *i; // rax
  char *v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  for ( i = *a1; i != a1[1]; i += 392 )
  {
    if ( (a2 & *(_DWORD *)i) != 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\metadata\\infometadata.cpp",
        a4);
  }
  v8 = a1[1];
  if ( v8 == a1[2] )
  {
    std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Emplace_reallocate<enum InputType &,InfoMetadata::InputInfoMetadata &>(
      a1,
      v8,
      &v10,
      a3);
  }
  else
  {
    *(_DWORD *)v8 = a2;
    InfoMetadata::InputInfoMetadata::InputInfoMetadata((InfoMetadata::InputInfoMetadata *)(v8 + 8), a3);
    a1[1] += 392;
  }
  InfoMetadata::InputInfoMetadata::~InputInfoMetadata(a3);
}
