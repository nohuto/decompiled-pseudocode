/*
 * XREFs of ?CompleteInteraction@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@@Z @ 0x18021A048
 * Callers:
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x18022A440 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 *     ?CompleteInteraction@CInteractionRoot@@UEAAJXZ @ 0x180262840 (-CompleteInteraction@CInteractionRoot@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CompleteInteraction(
        CInteractionProcessor *this,
        struct IManipulationResource *a2)
{
  struct IManipulationResource *v2; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v8; // rcx

  *((_BYTE *)this + 808) &= 0xC0u;
  *((_QWORD *)this + 98) = 0LL;
  v2 = a2;
  *((_DWORD *)this + 198) = 0;
  *((_QWORD *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 812) = 0LL;
  *(_QWORD *)((char *)this + 820) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  if ( a2 )
  {
    v4 = *(_QWORD *)a2;
    v5 = 3LL;
    if ( *((_DWORD *)this + 317) != 1 )
      v5 = 0LL;
    (*(void (__fastcall **)(struct IManipulationResource *, __int64))(v4 + 56))(v2, v5);
  }
  *((_DWORD *)this + 36) = 0;
  *((_BYTE *)this + 148) &= 0xF1u;
  *((_BYTE *)this + 308) &= 0xF1u;
  *((_DWORD *)this + 76) = 0;
  *((_BYTE *)this + 468) &= 0xF1u;
  *((_DWORD *)this + 116) = 0;
  *((_BYTE *)this + 628) &= 0xF1u;
  *((_DWORD *)this + 156) = 0;
  *((_WORD *)this + 624) = 0;
  *(_QWORD *)((char *)this + 1252) = 0LL;
  *((_DWORD *)this + 315) = 0;
  if ( *(_QWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD, struct IManipulationResource *, struct IManipulationResource *))(**(_QWORD **)this + 32LL))(
      *(_QWORD *)this,
      a2,
      v2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, 0LL);
    if ( (*((_BYTE *)this + 1264) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
    v8 = *((_QWORD *)this + 20);
    v6 = v8 == 0 ? 0x8007139F : 0;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 80LL))(*((_QWORD *)this + 20), 0LL);
      if ( (*((_BYTE *)this + 1264) & 8) == 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 128LL))(*((_QWORD *)this + 20));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 32LL))(*((_QWORD *)this + 40));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 40) + 80LL))(*((_QWORD *)this + 40), 0LL);
      if ( (*((_BYTE *)this + 1264) & 8) == 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 128LL))(*((_QWORD *)this + 40));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 32LL))(*((_QWORD *)this + 60));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 60) + 80LL))(*((_QWORD *)this + 60), 0LL);
      if ( (*((_BYTE *)this + 1264) & 8) == 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 128LL))(*((_QWORD *)this + 60));
    }
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v6;
}
