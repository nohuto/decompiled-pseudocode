/*
 * XREFs of ?RegisterForDesktopVisibilityChanges@CImmersiveMode@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x1800C79A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z @ 0x1800C835C (-Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@@@QEAAJ_K0@Z @ 0x1801EF50C (-_EnsureCapacity@-$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z @ 0x1802F164C (--_GDesktopVisibilityChangeListener@CImmersiveMode@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::RegisterForDesktopVisibilityChanges(
        _QWORD *a1,
        unsigned int a2,
        struct IUnknown *a3,
        unsigned int *a4)
{
  unsigned int *v8; // rax
  unsigned int v9; // edx
  unsigned int *v10; // rbx
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int **v14; // rdx

  *a4 = 0;
  v8 = (unsigned int *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v8;
  if ( v8 )
  {
    *v8 = 0;
    v8[1] = a2;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11 = GlobalInterfaceTable::Marshal(a3, &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84, v10);
    if ( v11 >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v11 = 0;
      v12 = a1[31];
      if ( v12 != a1[33]
        || (v11 = CTSimpleArray<CImmersiveMode::DesktopVisibilityChangeListener *,4294967294,CTPolicyLocalMem<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::DesktopVisibilityChangeListener *>>::_EnsureCapacity(
                    a1 + 30,
                    v12 + 1),
            v11 >= 0) )
      {
        v13 = a1[31];
        a1[31] = v13 + 1;
        v14 = (unsigned int **)(a1[30] + 8 * v13);
        if ( v14 )
          *v14 = v10;
      }
      if ( v11 >= 0 )
      {
        *a4 = *v10;
        v10 = 0LL;
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v10 )
    CImmersiveMode::DesktopVisibilityChangeListener::`scalar deleting destructor'(
      (CImmersiveMode::DesktopVisibilityChangeListener *)v10,
      v9);
  return (unsigned int)v11;
}
