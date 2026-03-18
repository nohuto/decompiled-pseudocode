/*
 * XREFs of GreExtCreateRegion @ 0x140066D70
 * Callers:
 *     NtGdiExtCreateRegion @ 0x140066C50 (NtGdiExtCreateRegion.c)
 * Callees:
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001971C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14001DD50 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x140023A90 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x140025980 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x140025A90 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140026760 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14002689C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x14002B9D0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x140065F10 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140066420 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1400671D0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1400683E0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     vConvertXformToMatrix @ 0x140068490 (vConvertXformToMatrix.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x140068670 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140068B50 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?RegionCore_fill_path_with_outline@Win32kRS@@YAHPEBVREGION_CORE@@AEAVEPATHOBJ@@PEBVEXFORMOBJ@@@Z @ 0x140068D20 (-RegionCore_fill_path_with_outline@Win32kRS@@YAHPEBVREGION_CORE@@AEAVEPATHOBJ@@PEBVEXFORMOBJ@@@Z.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140069384 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall GreExtCreateRegion(__int64 a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // ebx
  struct REGION_CORE *v7; // rdx
  const struct EXFORMOBJ *v8; // r9
  int v9; // edi
  unsigned int v10; // edx
  const struct REGION_CORE *v11; // r8
  struct REGION_CORE *v12; // rdx
  __int64 v13; // rbx
  _DWORD *v14; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v15; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __m128 *v18; // [rsp+40h] [rbp-C0h] BYREF
  __m128 *v19; // [rsp+48h] [rbp-B8h] BYREF
  char v20; // [rsp+50h] [rbp-B0h]
  _BYTE v21[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h]
  _QWORD v23[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v24; // [rsp+D0h] [rbp-30h]
  __m128 v25; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v26; // [rsp+F0h] [rbp-10h]
  int v27; // [rsp+100h] [rbp+0h]

  right = a3->right;
  if ( a3->left != 32 || right > 0xFFFFFFD || 16 * (right + 2) > a2 )
    return 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
  if ( !v14 || !(unsigned int)RGNOBJ::bSet((RGNOBJ *)&v14, right, a3 + 2) )
  {
    RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v14);
    EngSetLastError(8u);
    return 0LL;
  }
  if ( !a1 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v14, v7) == 1 )
  {
LABEL_31:
    RGNOBJ::vTighten((RGNOBJ *)&v14, v7);
    if ( (v14[13] & 0xF8000000) != 0 && (v14[13] & 0xF8000000) != -134217728
      || (v14[16] & 0xF8000000) != 0 && (v14[16] & 0xF8000000) != -134217728
      || (v14[15] & 0xF8000000) != 0 && (v14[15] & 0xF8000000) != -134217728
      || (v14[14] & 0xF8000000) != 0 && (v14[14] & 0xF8000000) != -134217728 )
    {
      RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v14);
      return 0LL;
    }
    else
    {
      v13 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v14);
      if ( !v13 )
        RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v14);
    }
    return v13;
  }
  v25 = 0LL;
  v27 = 0;
  v26 = 0LL;
  vConvertXformToMatrix(a1, &v25);
  DWORD2(v26) *= 16;
  HIDWORD(v26) *= 16;
  v18 = &v25;
  v25 = _mm_mul_ps(v25, (__m128)_xmm);
  *((float *)&v26 + 1) = *((float *)&v26 + 1) * 16.0;
  *(float *)&v26 = *(float *)&v26 * 16.0;
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v18, 8u);
  if ( !v18 )
  {
    RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v14);
    return 0LL;
  }
  if ( (v18[2].m128_i8[0] & 0x43) == 0x43 )
    goto LABEL_31;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v21);
  if ( !v22 )
  {
    EngSetLastError(8u);
    RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v14);
LABEL_19:
    EPATHOBJ::vUnlock((EPATHOBJ *)v21);
    if ( v24 )
      PopThreadGuardedObject(v23);
    return 0LL;
  }
  v19 = v18;
  v20 = 1;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v9 = Win32kRS::RegionCore_fill_path_with_outline(
           (Win32kRS *)((unsigned __int64)(v14 + 6) & -(__int64)(v14 != 0LL)),
           (const struct REGION_CORE *)v21,
           (struct EPATHOBJ *)&v19,
           v8);
  }
  else
  {
    REGION_CORE::get_sizeScan((REGION_CORE *)(v14 + 6));
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v17);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v17, v10);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v17);
    if ( v17 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v17, (struct RGNOBJ *)&v14, v11);
      v9 = RGNOBJ::bOutline((RGNOBJ *)&v17, (struct EPATHOBJ *)v21, (const struct EXFORMOBJR *)&v19);
    }
    else
    {
      EngSetLastError(8u);
      v9 = 0;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
  }
  RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v14);
  if ( !v9 )
  {
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v21);
    return 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v16);
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v16, (struct EPATHOBJ *)v21, (struct EPATHOBJ *)1, 0LL);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
  if ( !v16 || (RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15), !v15) )
  {
    EngSetLastError(8u);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
    goto LABEL_19;
  }
  RGNMEMOBJ::iReduce((RGNMEMOBJ *)&v15, (struct RGNOBJ *)&v16);
  RGNOBJ::vTighten((RGNOBJ *)&v15, v12);
  if ( (v15[13] & 0xF8000000) != 0 && (v15[13] & 0xF8000000) != -134217728
    || (v15[16] & 0xF8000000) != 0 && (v15[16] & 0xF8000000) != -134217728
    || (v15[15] & 0xF8000000) != 0 && (v15[15] & 0xF8000000) != -134217728
    || (v15[14] & 0xF8000000) != 0 && (v15[14] & 0xF8000000) != -134217728 )
  {
    RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v15);
    v13 = 0LL;
  }
  else
  {
    v13 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v15);
    if ( !v13 )
      RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v15);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
  EPATHOBJ::vUnlock((EPATHOBJ *)v21);
  if ( v24 )
    PopThreadGuardedObject(v23);
  return v13;
}
