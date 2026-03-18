/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1400BD900
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAUICompositionFrame@@@Z @ 0x1400CA5E4 (-FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAUICompositionFrame@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(void *Src, void *a2, void *a3)
{
  size_t v5; // rsi
  signed int CompositionFrame; // ebx
  __int64 v7; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v9; // r14
  unsigned int v10; // edx
  int v11; // eax
  int v13; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v14[3]; // [rsp+34h] [rbp-74h] BYREF
  void *v15; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-60h] BYREF
  struct ICompositionFrame *v17; // [rsp+50h] [rbp-58h] BYREF
  size_t v18; // [rsp+58h] [rbp-50h]
  void *Srca; // [rsp+60h] [rbp-48h] BYREF
  size_t Size; // [rsp+B0h] [rbp+8h] BYREF
  void *v21; // [rsp+B8h] [rbp+10h]
  void *v22; // [rsp+C0h] [rbp+18h]
  int v23; // [rsp+C8h] [rbp+20h] BYREF

  v22 = a3;
  v21 = a2;
  v23 = 0;
  v13 = 0;
  v5 = 0LL;
  v18 = 0LL;
  if ( Src )
  {
    Size = 0LL;
    RtlCopyFromUser(&Size, Src, 8uLL);
    v5 = Size;
    v18 = Size;
    CompositionFrame = Size == 0 ? 0xC000000D : 0;
    v14[1] = CompositionFrame;
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
        v17 = 0LL;
        CompositionFrame = DirectComposition::CConnection::FindCompositionFrame(DefaultConnection, v5, &v17);
        if ( CompositionFrame >= 0 )
        {
          v15 = 0LL;
          v16 = 0LL;
          CompositionFrame = (*(__int64 (__fastcall **)(_QWORD *, void **, unsigned __int64 *))(**((_QWORD **)v9 + 37)
                                                                                              + 64LL))(
                               *((_QWORD **)v9 + 37),
                               &v15,
                               &v16);
          if ( CompositionFrame >= 0 )
          {
            do
            {
              Srca = 0LL;
              LODWORD(Size) = 0;
              v14[0] = 0;
              v11 = (*(unsigned __int8 (__fastcall **)(struct ICompositionFrame *, void **, size_t *, _DWORD *))(*(_QWORD *)v17 + 40LL))(
                      v17,
                      &Srca,
                      &Size,
                      v14);
              v13 = (unsigned __int8)v11;
              if ( (_DWORD)Size )
              {
                memmove(v15, Srca, (unsigned int)Size);
                v15 = (char *)v15 + (unsigned int)Size;
                v16 -= (unsigned int)Size;
                v23 += v14[0];
                v11 = v13;
              }
            }
            while ( v11 && v16 >= 0x800 );
          }
          (*(void (__fastcall **)(struct ICompositionFrame *))(*(_QWORD *)v17 + 8LL))(v17);
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
  RtlCopyToUser(a2, &v23, 4uLL);
  RtlCopyToUser(a3, &v13, 4uLL);
  return (unsigned int)CompositionFrame;
}
