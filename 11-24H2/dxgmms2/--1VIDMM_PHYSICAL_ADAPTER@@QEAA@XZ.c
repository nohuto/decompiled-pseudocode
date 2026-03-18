/*
 * XREFs of ??1VIDMM_PHYSICAL_ADAPTER@@QEAA@XZ @ 0x14009CB74
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::~VIDMM_PHYSICAL_ADAPTER(VIDMM_PHYSICAL_ADAPTER *this)
{
  unsigned __int16 i; // di
  __int64 v3; // rsi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  if ( *((_QWORD *)this + 206) )
  {
    for ( i = 0; (unsigned int)i < *((_DWORD *)this + 16); *(_QWORD *)(*((_QWORD *)this + 206) + 8 * v3) = 0LL )
    {
      v3 = i;
      v4 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 206) + 8LL * i);
      if ( v4 )
        (**v4)(v4, 1LL);
      ++i;
    }
    operator delete(*((void **)this + 206));
    *((_QWORD *)this + 206) = 0LL;
  }
}
