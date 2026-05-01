/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_763cec3dac0cff81e03ecbc4f147f2fe___::CTaskWrapper__lambda_763cec3dac0cff81e03ecbc4f147f2fe_____lambda_763cec3dac0cff81e03ecbc4f147f2fe___ @ 0x18005546C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_763cec3dac0cff81e03ecbc4f147f2fe___ @ 0x1800553D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_763cec3dac0cff81e03ecbc4f147f2fe___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_763cec3dac0cff81e03ecbc4f147f2fe___::CTaskWrapper__lambda_763cec3dac0cff81e03ecbc4f147f2fe_____lambda_763cec3dac0cff81e03ecbc4f147f2fe___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = (_QWORD *)(a2 + 16);
  if ( a1 + 32 != a2 + 16 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)a1 = off_1807B1530;
  return a1;
}
