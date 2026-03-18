/*
 * XREFs of ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140068B50
 * Callers:
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 * Callees:
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001971C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x140026690 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140026760 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14002689C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400268F0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?RegionCore_iReduce@Win32kRS@@YAJPEAVREGION_CORE@@PEBV2@@Z @ 0x140068DB8 (-RegionCore_iReduce@Win32kRS@@YAJPEAVREGION_CORE@@PEBV2@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall RGNMEMOBJ::iReduce(RGNMEMOBJ *this, struct RGNOBJ *a2)
{
  unsigned int v4; // ebx
  _DWORD *v6; // rax
  const struct REGION_CORE *v7; // r9
  const struct REGION_CORE *v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  struct _RECTL si128; // [rsp+28h] [rbp-20h] BYREF

  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    return Win32kRS::RegionCore_iReduce(
             (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)),
             (struct REGION_CORE *)((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL)),
             (const struct REGION_CORE *)-*(_QWORD *)this);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v9);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v9, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v9);
  if ( !v9 )
    goto LABEL_3;
  si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  RGNOBJ::vSet((RGNOBJ *)&v9, &si128);
  v6 = *(_DWORD **)this;
  LOBYTE(v7) = 8;
  v6[13] = 0x7FFFFFFF;
  v6[14] = 0x7FFFFFFF;
  v6[15] = 0x80000000;
  v6[16] = 0x80000000;
  if ( (unsigned int)RGNOBJ::bMerge(this, (struct RGNOBJ *)&v9, a2, v7) )
  {
    v4 = RGNOBJ::iComplexity(this, v8);
  }
  else
  {
LABEL_3:
    RGNOBJ::vSet(this);
    v4 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
  return v4;
}
