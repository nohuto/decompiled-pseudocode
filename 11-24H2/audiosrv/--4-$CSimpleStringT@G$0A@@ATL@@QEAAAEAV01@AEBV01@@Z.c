/*
 * XREFs of ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18001AC90
 * Callers:
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18001A234 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18001A5F8 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18001BC74 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x18001C124 (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x18001C160 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18001CD40 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18006B274 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800FD8CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180014A60 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     memcpy_s @ 0x180042F00 (memcpy_s.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800A1154 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall ATL::CSimpleStringT<unsigned short,0>::operator=(__int64 *a1, const void **a2)
{
  const void *v2; // rbp
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rdi
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, __int64); // rax
  _DWORD *v8; // r14
  __int64 v9; // rax

  v2 = *a2;
  v4 = (volatile signed __int32 *)(*a1 - 24);
  v5 = (volatile signed __int32 *)((char *)*a2 - 24);
  if ( v5 != v4 )
  {
    if ( *((int *)v4 + 4) >= 0 && *(_QWORD *)v5 == *(_QWORD *)v4 )
    {
      v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 32LL))(*(_QWORD *)v5);
      if ( *((int *)v5 + 4) >= 0 && v6 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v5 )
      {
        _InterlockedIncrement(v5 + 4);
      }
      else
      {
        v8 = v5 + 2;
        v9 = (**v6)(v6, *((unsigned int *)v5 + 2), 2LL);
        v5 = (volatile signed __int32 *)v9;
        if ( !v9 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
        *(_DWORD *)(v9 + 8) = *v8;
        memcpy_s((void *const)(v9 + 24), 2LL * (*v8 + 1), v2, 2LL * (*v8 + 1));
      }
      if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4, v4);
      *a1 = (__int64)(v5 + 6);
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetString(a1, *a2, *((_DWORD *)v2 - 4));
    }
  }
  return a1;
}
