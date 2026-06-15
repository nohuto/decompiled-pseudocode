/*
 * XREFs of ??1CCompositeSystemEffect@@UEAA@XZ @ 0x18004E97C
 * Callers:
 *     ??_ECCompositeSystemEffect@@UEAAPEAXI@Z @ 0x18004E940 (--_ECCompositeSystemEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCompositeSystemEffect::~CCompositeSystemEffect(CCompositeSystemEffect *this)
{
  int *v2; // rdi
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  int i; // edi
  void *v8; // rcx

  v2 = (int *)((char *)this + 136);
  if ( *((_QWORD *)this + 16) )
  {
    v3 = 0;
    if ( *v2 > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *((_QWORD *)this + 16);
        v6 = *(_QWORD *)(v4 + v5);
        if ( v6 )
        {
          *(_QWORD *)(v4 + v5) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *v2 );
    }
    free(*((void **)this + 16));
    *((_QWORD *)this + 16) = 0LL;
  }
  *v2 = 0;
  *((_DWORD *)this + 35) = 0;
  if ( *((_QWORD *)this + 14) )
  {
    for ( i = 0; i < *((_DWORD *)this + 30); ++i )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)(*((_QWORD *)this + 14) + 8LL * i));
    free(*((void **)this + 14));
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 15) = 0LL;
  v8 = (void *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    free(v8);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 17) = -1073741823;
}
