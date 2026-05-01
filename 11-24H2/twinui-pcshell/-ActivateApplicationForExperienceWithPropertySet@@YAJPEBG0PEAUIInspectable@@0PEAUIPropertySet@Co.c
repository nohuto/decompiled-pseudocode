/*
 * XREFs of ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180039708
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18003D24C (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     _lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::operator() @ 0x1803B6348 (_lambda_89f63c8738b1ad17b99f8ae3b3dcb473_--operator().c)
 * Callees:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x18003A388 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 */

__int64 __fastcall ActivateApplicationForExperienceWithPropertySet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v8[1] = L"Windows.Launch";
  v8[0] = a1;
  v8[2] = a3;
  v8[3] = a7;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f_)(
           a4,
           a5,
           a6,
           v8);
}
