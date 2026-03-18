/*
 * XREFs of NtGdiCheckBitmapBits @ 0x14033B6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x140325560 (Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x14033B0AC (-GrepCheckBitmapBits@@YAHAEAVXDCOBJ@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 */

__int64 __fastcall NtGdiCheckBitmapBits(HDC a1, void *a2, void *a3, int a4, SIZE_T Size, int a6, int a7, PVOID Address)
{
  unsigned int v11; // r14d
  unsigned __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // esi
  HANDLE v15; // rsi
  HANDLE v16; // rax
  void *v17; // rdi
  ULONG v19; // ecx
  _DWORD v20[4]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-A8h]
  int v22; // [rsp+58h] [rbp-A0h]
  int v23; // [rsp+5Ch] [rbp-9Ch]
  _QWORD v24[19]; // [rsp+60h] [rbp-98h] BYREF

  v23 = 0;
  v11 = 1;
  if ( a4 != 2 || a6 != 1 )
    goto LABEL_26;
  v12 = 3LL * (unsigned int)Size;
  if ( v12 > 0xFFFFFFFF || (int)v12 + 3 < (unsigned int)v12 )
  {
    v19 = 534;
LABEL_27:
    EngSetLastError(v19);
    return 0LL;
  }
  v13 = (v12 + 3) & 0xFFFFFFFC;
  if ( a7 != v13 )
  {
LABEL_26:
    v19 = 87;
    goto LABEL_27;
  }
  v20[0] = 5;
  v20[1] = Size;
  v20[2] = 1;
  v20[3] = (v12 + 3) & 0xFFFFFFFC;
  v21 = 0LL;
  v22 = 0;
  if ( v13 && ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (v12 + 3) & 0xFFFFFFFC;
  if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
  {
    v15 = GrepSecureVirtualMemory(a3, v14, 2u);
    v16 = GrepSecureVirtualMemory(Address, (unsigned int)Size, 4u);
  }
  else
  {
    v15 = MmSecureVirtualMemory(a3, v14, 2u);
    v16 = MmSecureVirtualMemory(Address, (unsigned int)Size, 4u);
  }
  v17 = v16;
  if ( v15 )
  {
    if ( v16 )
    {
      APIDCOBJ::APIDCOBJ((APIDCOBJ *)v24, a1);
      if ( v24[0] )
        v11 = GrepCheckBitmapBits(
                (struct XDCOBJ *)v24,
                a2,
                (struct _DEVBITMAPINFO *)v20,
                a3,
                (unsigned __int8 *)Address);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v24);
    }
    if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
      GrepUnsecureVirtualMemory(v15);
    else
      MmUnsecureVirtualMemory(v15);
  }
  if ( v17 )
  {
    if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
      GrepUnsecureVirtualMemory(v17);
    else
      MmUnsecureVirtualMemory(v17);
  }
  return v11;
}
