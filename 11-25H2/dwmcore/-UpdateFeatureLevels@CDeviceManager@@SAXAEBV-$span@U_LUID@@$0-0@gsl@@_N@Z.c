/*
 * XREFs of ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@_N@Z @ 0x180226A48
 * Callers:
 *     ?UpdateCapabilities@CRenderTargetManager@@AEAAXXZ @ 0x180114778 (-UpdateCapabilities@CRenderTargetManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800FFDB8 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z @ 0x180226BA0 (-SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CDeviceManager::UpdateFeatureLevels(CD3DDevice *a1, unsigned __int8 a2)
{
  struct _LUID *v2; // rbx
  int v3; // esi
  int v4; // edi
  int v5; // r13d
  unsigned __int8 v6; // r12
  unsigned __int8 v7; // r15
  struct _LUID *v8; // r14
  int v9; // ecx
  int v10; // eax
  struct _LUID v11; // rdx
  int ExistingDevice; // eax
  int v13; // eax
  __int64 v14; // rdx
  CD3DDevice *v15; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v16[2]; // [rsp+28h] [rbp-28h] BYREF
  int v17; // [rsp+30h] [rbp-20h]
  int v18; // [rsp+34h] [rbp-1Ch]
  int v19; // [rsp+38h] [rbp-18h]

  v2 = (struct _LUID *)*((_QWORD *)a1 + 1);
  v3 = 0;
  v4 = 0;
  v5 = a2;
  v6 = 0;
  v7 = 1;
  v8 = &v2[*(_QWORD *)a1];
  while ( v2 != v8 )
  {
    v11 = *v2;
    v15 = 0LL;
    ExistingDevice = CDeviceManager::GetExistingDevice(a1, v11, &v15);
    a1 = v15;
    if ( ExistingDevice < 0 )
      goto LABEL_19;
    v13 = *((_DWORD *)v15 + 154);
    v14 = *((_QWORD *)v15 + 71);
    if ( !v3 || v13 < v3 )
      v3 = *((_DWORD *)v15 + 154);
    if ( v13 <= v4 )
    {
      if ( v14 )
LABEL_24:
        v6 = 1;
    }
    else
    {
      if ( v14 )
        goto LABEL_24;
      v4 = *((_DWORD *)v15 + 154);
    }
    if ( v13 < 37632 || *((_BYTE *)v15 + 1497) )
      v7 = 0;
LABEL_19:
    if ( v15 )
      CD3DDevice::Release(v15);
    ++v2;
  }
  v17 = v6;
  v9 = 37120;
  v18 = v7;
  v10 = 37120;
  if ( v3 )
    v10 = v3;
  v19 = v5;
  v16[0] = v10;
  if ( v4 )
    v9 = v4;
  v16[1] = v9;
  if ( CCommonRegistryData::m_forceEffectMode == 1 )
  {
    v18 = 0;
  }
  else if ( CCommonRegistryData::m_forceEffectMode == 2 )
  {
    v17 = 0;
    v18 = 1;
  }
  CComposition::SetCompositionCapabilities(g_pComposition, (const struct COMPOSITION_CAPABILITY_INFO *)v16);
}
