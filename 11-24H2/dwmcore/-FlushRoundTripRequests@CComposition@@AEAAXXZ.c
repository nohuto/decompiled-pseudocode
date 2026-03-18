/*
 * XREFs of ?FlushRoundTripRequests@CComposition@@AEAAXXZ @ 0x180226148
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800F424C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1801D815C (McTemplateU0qqx_EventWriteTransfer.c)
 */

void __fastcall CComposition::FlushRoundTripRequests(CComposition *this, __int64 a2)
{
  unsigned int i; // esi
  __int64 v4; // rbx
  int v5; // eax
  int v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+34h] [rbp-24h]
  __int64 v8; // [rsp+44h] [rbp-14h]

  for ( i = 0; i < *((_DWORD *)this + 248); *(_QWORD *)(v4 + 8) = 0LL )
  {
    v4 = *((_QWORD *)this + 121) + 16LL * i;
    if ( (unsigned int)(*(_DWORD *)(v4 + 4) - 1) <= 1 )
    {
      v6 = 8;
      v8 = 0LL;
      v5 = *(_DWORD *)v4;
      v7 = 0LL;
      DWORD1(v7) = v5;
      CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v6);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqx_EventWriteTransfer(
        (__int64)this,
        a2,
        *(unsigned int *)(v4 + 4),
        *(_DWORD *)v4,
        *(_QWORD *)(v4 + 8));
    *(_DWORD *)(v4 + 4) = 0;
    ++i;
  }
  *((_DWORD *)this + 248) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 968, 0x10u);
}
