/*
 * XREFs of _CmQueryDevicePanelPldProperty @ 0x14097A934
 * Callers:
 *     _CmUpdateDevicePanelInterface @ 0x140979C90 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x140979E38 (_CmUpdateDevicePanel.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmQueryDevicePanelPldProperty(
        _QWORD *a1,
        WCHAR *a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        const wchar_t **a6,
        ULONG *a7,
        const wchar_t **a8,
        unsigned int *a9)
{
  int ObjectProperty; // eax
  unsigned int v14; // ecx
  unsigned int v16; // edx
  const wchar_t *v17; // r8
  unsigned int v18; // eax
  ULONG v19; // eax
  __int64 Pool2; // rax
  unsigned int v21; // [rsp+60h] [rbp-38h] BYREF
  int v22[3]; // [rsp+64h] [rbp-34h] BYREF

  *a8 = 0LL;
  *a9 = 0;
  v22[0] = 0;
  v21 = 0;
  while ( 1 )
  {
    ObjectProperty = PnpGetObjectProperty(a1, a2, a3, a4, 0LL, a5, v22, *a6, *a7, (__int64)&v21, 0);
    v14 = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
      break;
    v19 = v21;
    if ( v21 <= *a7 )
      return (unsigned int)-1073741823;
    if ( *a6 )
    {
      ExFreePoolWithTag((PVOID)*a6, 0);
      v19 = v21;
    }
    *a7 = v19;
    Pool2 = ExAllocatePool2(0x100uLL, v19, 0x52504E50u);
    *a6 = (const wchar_t *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
  }
  if ( ObjectProperty < 0 )
    return v14;
  if ( v22[0] != 4099 )
    return (unsigned int)-1073741823;
  v16 = v21;
  if ( !v21 )
    return (unsigned int)-1073741823;
  v17 = *a6;
  v18 = *(_DWORD *)*a6 & 0x7F;
  if ( !v18 || v18 == 1 && v21 < 0x10 || v18 >= 2 && v21 < 0x14 || (v17[4] & 0x38u) >= 0x30 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    *a8 = v17;
    *a9 = v16;
  }
  return v14;
}
