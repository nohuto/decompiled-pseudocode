/*
 * XREFs of GetHwpPerfControlHandler @ 0x14002AC30
 * Callers:
 *     <none>
 * Callees:
 *     Feature_S4ResumeHwpPerfBug__private_IsEnabledDeviceUsageNoInline @ 0x140007334 (Feature_S4ResumeHwpPerfBug__private_IsEnabledDeviceUsageNoInline.c)
 *     IsHwpFastMsrSupported @ 0x14002AF88 (IsHwpFastMsrSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x14002B004 (IsHwpIdleOptimizationSupported.c)
 *     IsHwpPackageControlSupported @ 0x14002B080 (IsHwpPackageControlSupported.c)
 */

__int64 __fastcall GetHwpPerfControlHandler(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        _QWORD *a6,
        _BYTE *a7,
        _BYTE *a8,
        bool *a9,
        _DWORD *a10)
{
  __int64 v10; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned int v15; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 (__fastcall *v17)(__int64, __int64, char, char); // rcx
  void *v18; // rax
  char v19; // bl

  v10 = *(_QWORD *)(a2 + 144);
  v13 = 0LL;
  v14 = 0LL;
  v15 = -1073741637;
  if ( *(_BYTE *)(a2 + 125) )
  {
    if ( *(_BYTE *)(v10 + 128) != 127 || *(_BYTE *)(v10 + 129) != 8 || *(_BYTE *)(v10 + 130) != 16 )
      return v15;
    v13 = *(_QWORD *)(v10 + 132);
    v14 = 16711680LL;
  }
  if ( *(_BYTE *)(a2 + 126) )
  {
    if ( *(_BYTE *)(v10 + 152) != 127 || *(_BYTE *)(v10 + 153) != 8 || *(_BYTE *)(v10 + 154) )
      return v15;
    if ( v13 )
    {
      if ( v13 != *(_QWORD *)(v10 + 156) )
        return v15;
    }
    else
    {
      v13 = *(_QWORD *)(v10 + 156);
    }
    v14 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a2 + 127) )
  {
    if ( *(_BYTE *)(v10 + 176) != 127 || *(_BYTE *)(v10 + 177) != 8 || *(_BYTE *)(v10 + 178) != 8 )
      return v15;
    if ( v13 )
    {
      if ( v13 != *(_QWORD *)(v10 + 180) )
        return v15;
    }
    else
    {
      v13 = *(_QWORD *)(v10 + 180);
    }
    v14 |= 0xFF00uLL;
  }
  if ( *(_BYTE *)(a2 + 128) )
  {
    if ( *(_BYTE *)(v10 + 416) != 127 || *(_BYTE *)(v10 + 417) != 8 || *(_BYTE *)(v10 + 418) != 24 )
      return v15;
    if ( v13 )
    {
      if ( v13 != *(_QWORD *)(v10 + 420) )
        return v15;
    }
    else
    {
      v13 = *(_QWORD *)(v10 + 420);
    }
    v14 |= 0xFF000000uLL;
  }
  if ( *(_BYTE *)(a2 + 129) )
  {
    if ( *(_BYTE *)(v10 + 392) != 127 || *(_BYTE *)(v10 + 393) != 10 || *(_BYTE *)(v10 + 394) != 32 )
      return v15;
    if ( v13 )
    {
      if ( v13 != *(_QWORD *)(v10 + 396) )
        return v15;
    }
    else
    {
      v13 = *(_QWORD *)(v10 + 396);
    }
    v14 |= 0x3FF00000000uLL;
  }
  if ( !*(_BYTE *)(a2 + 130)
    && ((v13 - 1906) & 0xFFFFFFFFFFFFFFFDuLL) == 0
    && (!*(_BYTE *)(a2 + 1348) || *(_BYTE *)(a2 + 1352) == 127 && *(_QWORD *)(a2 + 1356) == 3215LL) )
  {
    *(_QWORD *)(a2 + 184) = v14;
    *a6 = PerfSelectionHwp;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Eu) )
    {
      *a3 = PerfControlHwpLp;
      *a4 = PerfControlHwpLp;
      *a5 = 0LL;
      *a8 = 1;
      *a7 = 0;
      *a10 = 0;
      *a9 = 0;
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_S4ResumeHwpPerfBug__private_IsEnabledDeviceUsageNoInline();
      v17 = PerfControlHwp;
      if ( !IsEnabledDeviceUsageNoInline )
        v17 = PerfControlHwpV1;
      v18 = PerfControlHwpHidden;
      *a3 = v17;
      if ( dword_140019A88 == 1 )
        v18 = PerfControlHwpHv;
      *a4 = v18;
      *a5 = (unsigned __int64)PerfControlHwpPackage & -(__int64)((unsigned __int8)IsHwpPackageControlSupported() != 0);
      v19 = IsHwpFastMsrSupported();
      *a8 = 0;
      *a7 = 1;
      *a9 = (unsigned __int8)IsHwpIdleOptimizationSupported() == 0;
      *a10 = v19 != 0 ? 500 : 1000;
    }
    return 0;
  }
  return v15;
}
