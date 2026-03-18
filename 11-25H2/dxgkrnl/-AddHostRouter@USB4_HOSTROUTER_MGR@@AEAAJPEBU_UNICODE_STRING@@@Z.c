/*
 * XREFs of ?AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1402707F8
 * Callers:
 *     ?_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z @ 0x140271DB0 (-_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002F83C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034DA0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x140043C04 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z @ 0x140090258 (--_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::AddHostRouter(USB4_HOSTROUTER_MGR *this, const struct _UNICODE_STRING *a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  size_t v11; // rdx
  const unsigned __int16 *v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rcx
  char v16; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v16, (USB4_HOSTROUTER_MGR *)((char *)this + 8));
  v4 = a2->Length + 2;
  v6 = operator new(0x28uLL, 0x4D677844u, 256LL, v5);
  v8 = v6;
  if ( !v6 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 636;
    goto LABEL_10;
  }
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_WORD *)(v6 + 18) = v4;
  v9 = 2LL * v4;
  if ( !is_mul_ok(v4, 2uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, 0x4D677844u, 256LL, v7);
  *(_QWORD *)(v8 + 24) = v10;
  *(_WORD *)(v8 + 16) = 0;
  if ( !v10 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 648;
    USB4_HOST_ROUTER::`scalar deleting destructor'((struct _UNICODE_STRING *)v8);
LABEL_10:
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v16);
    return 3221225495LL;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)(v8 + 16), a2);
  v11 = *(unsigned __int16 *)(v8 + 18);
  v12 = *(const unsigned __int16 **)(v8 + 24);
  v17 = 0LL;
  RtlStringCchLengthW(v12, v11, &v17);
  *(_DWORD *)(v8 + 32) = _wtoi((const wchar_t *)(*(_QWORD *)(v8 + 24) + 2 * (v17 - 1)));
  v13 = (__int64 *)((char *)this + 56);
  v14 = *((_QWORD *)this + 7);
  if ( *(USB4_HOSTROUTER_MGR **)(v14 + 8) != (USB4_HOSTROUTER_MGR *)((char *)this + 56) )
    __fastfail(3u);
  *(_QWORD *)v8 = v14;
  *(_QWORD *)(v8 + 8) = v13;
  *(_QWORD *)(v14 + 8) = v8;
  *v13 = v8;
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v16);
  return 0LL;
}
