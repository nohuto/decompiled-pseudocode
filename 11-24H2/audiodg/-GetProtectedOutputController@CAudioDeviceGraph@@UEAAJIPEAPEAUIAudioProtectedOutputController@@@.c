/*
 * XREFs of ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140064AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140014310 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::GetProtectedOutputController(
        CAudioDeviceGraph *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct IAudioProtectedOutputController **); // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, struct IAudioProtectedOutputController **); // rax
  __int64 Tail; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+18h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 256);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  v13 = v6;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( *((_DWORD *)this + 62) )
    {
      if ( a2 != 4 || *((_DWORD *)this + 74) )
      {
        v12 = 0LL;
        Tail = ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*((_QWORD *)this + 19) + 16LL);
        v7 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)Tail + 32LL))(
               **(_QWORD **)(*(_QWORD *)Tail + 32LL),
               &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8,
               &v12);
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v12 + 24LL))(
                 v12,
                 a2,
                 a3);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      else
      {
        v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IAudioProtectedOutputController **))*((_QWORD *)this + 14);
        if ( !v8 )
        {
          v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IAudioProtectedOutputController **))operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
          v8 = v9;
          if ( !v9 )
          {
            v7 = -2147024882;
            goto LABEL_14;
          }
          *v9 = (__int64 (__fastcall **)(_QWORD, GUID *, struct IAudioProtectedOutputController **))&CProtectedOutputController::`vftable';
          v9[1] = (__int64 (__fastcall **)(_QWORD, GUID *, struct IAudioProtectedOutputController **))((char *)this - 8);
          v9[2] = 0LL;
          v9[3] = 0LL;
          v9[4] = 0LL;
          v9[5] = 0LL;
          v9[6] = 0LL;
          *((_DWORD *)v9 + 14) = 10;
          *((_DWORD *)v9 + 16) = 0;
          *((_QWORD *)this + 14) = v9;
        }
        v7 = (**v8)(v8, &GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842, a3);
      }
    }
    else
    {
      v7 = -2005139437;
    }
  }
  else
  {
    v7 = -2147467261;
  }
LABEL_14:
  CSAutoLock<1>::~CSAutoLock<1>(&v13);
  return (unsigned int)v7;
}
