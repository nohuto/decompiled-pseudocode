/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x18006C490
 * Callers:
 *     <none>
 * Callees:
 *     ?SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z @ 0x18006C5E0 (-SaDeviceExists@CDeviceGraphObjectsStore@@UEAA_NW4_AUDCLNT_SHAREMODE@@@Z.c)
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18006C670 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 *     _lambda_e56d8910bbf57adb71c0704c39bb5897_::_lambda_e56d8910bbf57adb71c0704c39bb5897_ @ 0x1800B7004 (_lambda_e56d8910bbf57adb71c0704c39bb5897_--_lambda_e56d8910bbf57adb71c0704c39bb5897_.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     std::function_bool___cdecl(ISaDeviceProxy__)_::function_bool___cdecl(ISaDeviceProxy__)___lambda_e56d8910bbf57adb71c0704c39bb5897__0_ @ 0x1800F3FE8 (std--function_bool___cdecl(ISaDeviceProxy__)_--function_bool___cdecl(ISaDeviceProxy__)___lambda_.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        struct ISaDeviceProxy **a5)
{
  struct ISaDeviceProxy **v5; // r15
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int FirstMatchingSaDevice; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  _BYTE v15[64]; // [rsp+20h] [rbp-58h] BYREF
  const struct SaDeviceParams *v16; // [rsp+88h] [rbp+10h] BYREF

  v16 = a2;
  v5 = a5;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *a5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( CDeviceGraphObjectsStore::SaDeviceExists(this, AUDCLNT_SHAREMODE_EXCLUSIVE) )
  {
    if ( !a4 || a3 )
    {
      FirstMatchingSaDevice = -2005139364;
      goto LABEL_6;
    }
    goto LABEL_16;
  }
  if ( a3 != AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
LABEL_16:
    if ( *((_DWORD *)a2 + 2) != 1 )
    {
      v13 = lambda_e56d8910bbf57adb71c0704c39bb5897_::_lambda_e56d8910bbf57adb71c0704c39bb5897_(&a5, &v16);
      v14 = std::function_bool___cdecl_ISaDeviceProxy____::function_bool___cdecl_ISaDeviceProxy______lambda_e56d8910bbf57adb71c0704c39bb5897__0_(
              v15,
              v13);
      FirstMatchingSaDevice = CDeviceGraphObjectsStore::FindFirstMatchingSaDevice(this, v14, v5);
      goto LABEL_6;
    }
LABEL_18:
    FirstMatchingSaDevice = -2005139430;
    goto LABEL_6;
  }
  if ( !CDeviceGraphObjectsStore::SaDeviceExists(this, AUDCLNT_SHAREMODE_SHARED) || a4 )
    goto LABEL_18;
  FirstMatchingSaDevice = -2005139363;
LABEL_6:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_315cf95596543faf822237737ca2f47c_Traceguids,
      FirstMatchingSaDevice);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return FirstMatchingSaDevice;
}
