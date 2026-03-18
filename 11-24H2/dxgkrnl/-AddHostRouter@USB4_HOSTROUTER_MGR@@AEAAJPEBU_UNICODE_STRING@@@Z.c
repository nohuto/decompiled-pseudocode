/*
 * XREFs of ?AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x140277984
 * Callers:
 *     ?_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z @ 0x140278F50 (-_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x140043874 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z @ 0x1400916B8 (--_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::AddHostRouter(USB4_HOSTROUTER_MGR *this, const struct _UNICODE_STRING *a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  size_t v9; // rdx
  const unsigned __int16 *v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  char v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v14, (USB4_HOSTROUTER_MGR *)((char *)this + 8));
  v4 = a2->Length + 2;
  v5 = operator new(0x28uLL, 0x4D677844u, 256LL);
  v6 = v5;
  if ( !v5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 636;
    goto LABEL_10;
  }
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_WORD *)(v5 + 18) = v4;
  v7 = 2LL * v4;
  if ( !is_mul_ok(v4, 2uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, 0x4D677844u, 256LL);
  *(_QWORD *)(v6 + 24) = v8;
  *(_WORD *)(v6 + 16) = 0;
  if ( !v8 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 648;
    USB4_HOST_ROUTER::`scalar deleting destructor'((struct _UNICODE_STRING *)v6);
LABEL_10:
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v14);
    return 3221225495LL;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)(v6 + 16), a2);
  v9 = *(unsigned __int16 *)(v6 + 18);
  v10 = *(const unsigned __int16 **)(v6 + 24);
  v15 = 0LL;
  RtlStringCchLengthW(v10, v9, &v15);
  *(_DWORD *)(v6 + 32) = _wtoi((const wchar_t *)(*(_QWORD *)(v6 + 24) + 2 * (v15 - 1)));
  v11 = (__int64 *)((char *)this + 56);
  v12 = *((_QWORD *)this + 7);
  if ( *(USB4_HOSTROUTER_MGR **)(v12 + 8) != (USB4_HOSTROUTER_MGR *)((char *)this + 56) )
    __fastfail(3u);
  *(_QWORD *)v6 = v12;
  *(_QWORD *)(v6 + 8) = v11;
  *(_QWORD *)(v12 + 8) = v6;
  *v11 = v6;
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v14);
  return 0LL;
}
