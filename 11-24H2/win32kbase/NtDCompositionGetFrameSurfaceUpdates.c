/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1400BF1A0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAUICompositionFrame@@@Z @ 0x1400CA5E4 (-FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAUICompositionFrame@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(void *Src, void *a2, void *a3)
{
  struct ICompositionFrame *v5; // rsi
  signed int CompositionFrame; // ebx
  __int64 v7; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v9; // r14
  unsigned int v10; // edx
  struct ICompositionFrame *v12; // [rsp+38h] [rbp-50h] BYREF
  struct ICompositionFrame *v13; // [rsp+40h] [rbp-48h]
  unsigned __int64 v14; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v15[7]; // [rsp+50h] [rbp-38h] BYREF
  int Srca; // [rsp+90h] [rbp+8h] BYREF
  void *v17; // [rsp+98h] [rbp+10h]
  void *v18; // [rsp+A0h] [rbp+18h]
  int v19; // [rsp+A8h] [rbp+20h] BYREF

  v18 = a3;
  v17 = a2;
  Srca = 0;
  v19 = 0;
  v5 = 0LL;
  v13 = 0LL;
  if ( Src )
  {
    v12 = 0LL;
    RtlCopyFromUser(&v12, Src, 8uLL);
    v5 = v12;
    v13 = v12;
    CompositionFrame = v12 == 0LL ? 0xC000000D : 0;
  }
  else
  {
    CompositionFrame = -1073741811;
  }
  if ( CompositionFrame >= 0 )
  {
    if ( UserIsCurrentProcessDwm() )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v7);
      v9 = DefaultConnection;
      if ( DefaultConnection )
      {
        v12 = 0LL;
        CompositionFrame = DirectComposition::CConnection::FindCompositionFrame(
                             DefaultConnection,
                             (unsigned __int64)v5,
                             &v12);
        if ( CompositionFrame >= 0 )
        {
          v15[0] = 0LL;
          v14 = 0LL;
          CompositionFrame = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, unsigned __int64 *))(**((_QWORD **)v9 + 37)
                                                                                               + 64LL))(
                               *((_QWORD **)v9 + 37),
                               v15,
                               &v14);
          if ( CompositionFrame >= 0 )
            v19 = (*(unsigned __int8 (__fastcall **)(struct ICompositionFrame *, _QWORD, unsigned __int64, int *))(*(_QWORD *)v12 + 48LL))(
                    v12,
                    v15[0],
                    v14 / 0x178,
                    &Srca);
          (*(void (__fastcall **)(struct ICompositionFrame *))(*(_QWORD *)v12 + 8LL))(v12);
        }
        DirectComposition::CConnection::Release(v9, v10);
      }
      else
      {
        CompositionFrame = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      CompositionFrame = -1073741790;
    }
  }
  RtlCopyToUser(a2, &Srca, 4uLL);
  RtlCopyToUser(a3, &v19, 4uLL);
  return (unsigned int)CompositionFrame;
}
