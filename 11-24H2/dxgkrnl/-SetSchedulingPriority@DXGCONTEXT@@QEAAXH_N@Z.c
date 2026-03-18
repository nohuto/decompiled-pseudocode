/*
 * XREFs of ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1403A1874
 * Callers:
 *     ?SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x14006C8EC (-SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1403A17B0 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1403A1820 (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXGCONTEXT::SetSchedulingPriority(DXGCONTEXT *this, unsigned int a2, unsigned __int8 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax

  if ( !*((_BYTE *)this + 434) )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = *(_QWORD *)(v5 + 16);
    if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 336LL))(
        *((_QWORD *)this + 35),
        a2,
        a3,
        *(unsigned int *)(*(_QWORD *)(v5 + 40) + 416LL));
    else
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 328LL))(
        *((_QWORD *)this + 32),
        a2,
        a3,
        *(unsigned int *)(*(_QWORD *)(v5 + 40) + 416LL));
  }
  *((_DWORD *)this + 106) = a2;
}
