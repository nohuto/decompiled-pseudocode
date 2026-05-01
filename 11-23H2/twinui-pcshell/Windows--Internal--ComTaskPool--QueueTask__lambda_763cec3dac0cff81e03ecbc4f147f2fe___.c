/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_763cec3dac0cff81e03ecbc4f147f2fe___ @ 0x1800553D8
 * Callers:
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B3444 (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_763cec3dac0cff81e03ecbc4f147f2fe___::CTaskWrapper__lambda_763cec3dac0cff81e03ecbc4f147f2fe_____lambda_763cec3dac0cff81e03ecbc4f147f2fe___ @ 0x18005546C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_763cec3dac0cff81e03ecbc4f147f2fe___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_763cec3dac0cff81e03ecbc4f147f2fe___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_763cec3dac0cff81e03ecbc4f147f2fe___::CTaskWrapper__lambda_763cec3dac0cff81e03ecbc4f147f2fe_____lambda_763cec3dac0cff81e03ecbc4f147f2fe___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
