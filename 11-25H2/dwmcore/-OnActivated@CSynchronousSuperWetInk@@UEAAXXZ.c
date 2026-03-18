/*
 * XREFs of ?OnActivated@CSynchronousSuperWetInk@@UEAAXXZ @ 0x1802B0C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSynchronousSuperWetInk::OnActivated(CSynchronousSuperWetInk *this, __int64 a2)
{
  if ( *((_DWORD *)this + 43) != 2 )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 23) + 96LL) + 424LL))(
      *(_QWORD *)(*((_QWORD *)this + 23) + 96LL),
      a2);
  }
  *((_BYTE *)this + 96) = 0;
}
