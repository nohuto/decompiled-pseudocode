/*
 * XREFs of ?GetAdapterAndTargetFromEdid@DisplayEdidHelpers@@YAJPEBUEdidIdentificationBlock@@PEAU_LUID@@PEAK@Z @ 0x180107718
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x1800DDA20 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800856B0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 *     ?GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z @ 0x1801079D8 (-GetRawEdidIdentificationBlock@DisplayEdidHelpers@@YAJU_LUID@@KPEAUEdidIdentificationBlock@@@Z.c)
 */

__int64 __fastcall DisplayEdidHelpers::GetAdapterAndTargetFromEdid(
        DisplayEdidHelpers *this,
        LUID *a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  unsigned int DisplayConfigBufferSizes; // eax
  DISPLAYCONFIG_PATH_INFO *v9; // rbx
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rdi
  unsigned int v11; // eax
  const struct std::nothrow_t *v12; // rdx
  struct EdidIdentificationBlock *v13; // r9
  const struct std::nothrow_t *v14; // rdx
  unsigned int v15; // esi
  __int64 i; // rsi
  struct _LUID id; // rdx
  DisplayEdidHelpers *adapterId; // rcx
  UINT32 numModeInfoArrayElements[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v20[2]; // [rsp+48h] [rbp-18h] BYREF
  __int16 v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  UINT32 numPathArrayElements; // [rsp+A8h] [rbp+48h] BYREF

  numPathArrayElements = 0;
  numModeInfoArrayElements[0] = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, numModeInfoArrayElements);
  if ( DisplayConfigBufferSizes )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x31,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
             (const char *)DisplayConfigBufferSizes);
  v9 = (DISPLAYCONFIG_PATH_INFO *)operator new[](saturated_mul(numPathArrayElements, 0x48uLL));
  modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)operator new[](saturated_mul(numModeInfoArrayElements[0], 0x40uLL));
  v11 = QueryDisplayConfig(2u, &numPathArrayElements, v9, numModeInfoArrayElements, modeInfoArray, 0LL);
  if ( v11 )
  {
    v15 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x3E,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
            (const char *)v11);
    if ( v9 )
      operator delete(v9, v14);
    if ( modeInfoArray )
      operator delete(modeInfoArray, v14);
    return v15;
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < numPathArrayElements; i = (unsigned int)(i + 1) )
    {
      id = (struct _LUID)v9[i].targetInfo.id;
      adapterId = (DisplayEdidHelpers *)v9[i].sourceInfo.adapterId;
      *(_QWORD *)v20 = 0LL;
      v21 = 0;
      if ( (int)DisplayEdidHelpers::GetRawEdidIdentificationBlock(adapterId, id, (unsigned int)v20, v13) >= 0
        && v20[0] == *(_DWORD *)this
        && v20[1] == *((_DWORD *)this + 1)
        && v21 == *((_WORD *)this + 4) )
      {
        *a2 = v9[i].sourceInfo.adapterId;
        a3->LowPart = v9[i].targetInfo.id;
        break;
      }
    }
    if ( v9 )
      operator delete(v9, v12);
    if ( modeInfoArray )
      operator delete(modeInfoArray, v12);
    return 0LL;
  }
}
