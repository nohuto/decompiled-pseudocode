/*
 * XREFs of ?GetMarshalSizeMax@CFTMCrossProcBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180042400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800069E0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042A68 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFTMCrossProcBase::GetMarshalSizeMax(
        LPUNKNOWN punkOuter,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rsi
  const struct _GUID *v12; // rdx
  signed int FTM; // ebx
  _QWORD *v14; // rax
  struct IUnknownVtbl *lpVtbl; // rax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  void *v20[2]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v20[0] = 0LL;
  *a7 = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v20);
  FTM = CFTMCrossProcBase::_GetFTM(punkOuter, v12, v20);
  if ( FTM >= 0 )
  {
    FTM = (*(__int64 (__fastcall **)(void *, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int *))(*(_QWORD *)v20[0] + 32LL))(
            v20[0],
            a2,
            a3,
            a4,
            a5,
            a6,
            v7);
    if ( FTM >= 0 && a4 != 3 )
    {
      v14 = (_QWORD *)((__int64 (__fastcall *)(LPUNKNOWN))punkOuter->lpVtbl[3].Release)(punkOuter);
      if ( *(_QWORD *)&GUID_NULL.Data1 != *v14 || *(_QWORD *)GUID_NULL.Data4 != v14[1] )
      {
        lpVtbl = punkOuter->lpVtbl;
        LODWORD(a7) = 0;
        FTM = ((__int64 (__fastcall *)(LPUNKNOWN, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))lpVtbl[3].QueryInterface)(
                punkOuter,
                a2,
                a3,
                a4,
                a5,
                a6,
                &a7);
        if ( FTM >= 0 )
        {
          _InterlockedExchange((volatile __int32 *)&punkOuter[4], (__int32)a7);
          v16 = (unsigned int)punkOuter[4].lpVtbl;
          if ( v16 + 4 < v16 )
          {
            FTM = -2147024362;
          }
          else
          {
            v17 = v16 + 4 + *v7;
            v18 = -1;
            if ( v17 >= *v7 )
              v18 = v17;
            FTM = v17 < *v7 ? 0x80070216 : 0;
            *v7 = v18;
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v20);
  return (unsigned int)FTM;
}
