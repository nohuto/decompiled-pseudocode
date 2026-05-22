/*
 * XREFs of ?FreeSection@SipcPort@@QEAAJPEAX@Z @ 0x18010EE2C
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180062490 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x180110890 (-UnmapBuffer@SipcEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?FindSection@SipcPort@@IEAAPEAVSipcSection@@PEAX@Z @ 0x18010EDF4 (-FindSection@SipcPort@@IEAAPEAVSipcSection@@PEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcPort::FreeSection(SipcPort *this, void *a2)
{
  struct SipcSection *Section; // rax
  __int64 v3; // r11
  struct SipcSection *v4; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rdx

  Section = SipcPort::FindSection(this, a2);
  v4 = Section;
  if ( !Section )
    return 2147942487LL;
  v6 = (_QWORD *)((char *)Section + 8);
  v7 = *v6;
  if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  --*(_DWORD *)(v3 + 24);
  (**(void (__fastcall ***)(struct SipcSection *, __int64))v4)(v4, 1LL);
  return 0LL;
}
