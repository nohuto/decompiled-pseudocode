/*
 * XREFs of ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1403BF1EC
 * Callers:
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1401E7FFC (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 *     ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1403AD2B4 (-ProcessStatusChange@DXGPROCESS@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGDEVICE::NotifyProcessStatusChange(DXGDEVICE *this)
{
  __int64 v1; // r8
  __int64 v3; // r8
  __int64 v4; // rax

  v1 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 16) + 209LL) )
  {
    v3 = *(_QWORD *)(v1 + 736);
    v4 = *(_QWORD *)(v3 + 8);
    LOBYTE(v3) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v4 + 160))(
      *((_QWORD *)this + 100),
      *(unsigned int *)(*((_QWORD *)this + 5) + 416LL),
      v3);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 984LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 768LL));
  }
}
