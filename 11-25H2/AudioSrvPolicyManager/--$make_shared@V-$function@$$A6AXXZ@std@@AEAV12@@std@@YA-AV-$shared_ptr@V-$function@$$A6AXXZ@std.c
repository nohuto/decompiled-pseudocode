/*
 * XREFs of ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x18001D430
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180030D28 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18001D4B4 (--$_Construct_in_place@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV-$function@$$A6AXXZ@0@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<std::function<void (void)>,std::function<void (void)> &>(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x50uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
    std::_Construct_in_place<std::function<void (void)>,std::function<void (void)> &>(v4 + 4, a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  return a1;
}
