/*
 * XREFs of ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180059A80
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAXXZ @ 0x180059B98 (-RemoveAll@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180059BFC (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?ProcessOnPropertyChanged@CAudioSrv@@AEAAXPEBGU_tagpropertykey@@@Z @ 0x18005A01C (-ProcessOnPropertyChanged@CAudioSrv@@AEAAXPEBGU_tagpropertykey@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioSrv::OnDeviceWorkItem(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v10; // rcx
  CAudioSrv *v11; // rcx
  struct _tagpropertykey v12; // [rsp+30h] [rbp-28h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a2 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 112));
  v5 = (__int64 *)(a2 + 152);
  v6 = (__int64 *)*((_QWORD *)a2 + 19);
  if ( !v6 )
    ATL::AtlThrowImpl(-2147467259);
  v7 = v6[2];
  v8 = *v6;
  *v5 = *v6;
  if ( v8 )
    *(_QWORD *)(v8 + 8) = 0LL;
  else
    v5[1] = 0LL;
  *v6 = v5[4];
  v5[4] = (__int64)v6;
  if ( v5[2]-- == 1 )
    ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveAll(v5);
  if ( v4 )
    LeaveCriticalSection(v4);
  v10 = (unsigned int)(*(_DWORD *)(v7 + 16) - 1);
  if ( *(_DWORD *)(v7 + 16) == 1
    || (v10 = (unsigned int)(*(_DWORD *)(v7 + 16) - 2), *(_DWORD *)(v7 + 16) == 2)
    || (v10 = (unsigned int)(*(_DWORD *)(v7 + 16) - 3), *(_DWORD *)(v7 + 16) == 3) )
  {
    CAudioSrv::ProcessDeviceInternal((CAudioSrv *)v10, *(const unsigned __int16 **)(v7 + 8));
  }
  else
  {
    v11 = (CAudioSrv *)(unsigned int)(*(_DWORD *)(v7 + 16) - 4);
    if ( *(_DWORD *)(v7 + 16) == 4 )
    {
      v12 = *(struct _tagpropertykey *)(v7 + 32);
      CAudioSrv::ProcessOnPropertyChanged(v11, *(const unsigned __int16 **)(v7 + 8), &v12);
    }
    else if ( *(_DWORD *)(v7 + 16) == 5 )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 360LL))(
        g_PolicyManager,
        *(_QWORD *)(v7 + 8),
        *(unsigned int *)(v7 + 20),
        *(unsigned int *)(v7 + 24));
    }
  }
  (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
}
