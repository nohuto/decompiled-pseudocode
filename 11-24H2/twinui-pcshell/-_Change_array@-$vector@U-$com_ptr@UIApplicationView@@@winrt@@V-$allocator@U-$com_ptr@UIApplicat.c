/*
 * XREFs of ?_Change_array@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAXQEAU?$com_ptr@UIApplicationView@@@winrt@@_K1@Z @ 0x1801AA1A8
 * Callers:
 *     ??$_Emplace_reallocate@AEAU?$com_ptr@UIApplicationView@@@winrt@@@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@AEAAPEAU?$com_ptr@UIApplicationView@@@winrt@@QEAU23@AEAU23@@Z @ 0x1801AA058 (--$_Emplace_reallocate@AEAU-$com_ptr@UIApplicationView@@@winrt@@@-$vector@U-$com_ptr@UIApplicati.c)
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x18004E0E8 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802DF760 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::vector<winrt::com_ptr<IApplicationView>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v9; // rbp
  void *v10; // rcx
  __int64 v11; // rdx
  const struct std::nothrow_t *v12; // rdx
  __int64 result; // rax
  void *v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(__int64 **)(a1 + 8);
    while ( v4 != v9 )
      winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(v4++);
    v10 = *(void **)a1;
    v11 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
    v14 = *(void **)a1;
    v12 = (const struct std::nothrow_t *)(v11 & 0xFFFFFFFFFFFFFFF8uLL);
    v15 = (unsigned __int64)v12;
    if ( (unsigned __int64)v12 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v14, &v15);
      v10 = v14;
      v12 = (const struct std::nothrow_t *)v15;
    }
    operator delete(v10, v12);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
