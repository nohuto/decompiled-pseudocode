/*
 * XREFs of GreCombineRgn @ 0x140025D30
 * Callers:
 *     UserSetDCVisRgn @ 0x14000F460 (UserSetDCVisRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140010DA0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtGdiCombineRgn @ 0x140025D10 (NtGdiCombineRgn.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     UserValidateCopyRgn @ 0x140113380 (UserValidateCopyRgn.c)
 * Callees:
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001971C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x140025A90 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x140025C20 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1400262A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140026760 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14002689C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400268F0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14002D0C0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14002D140 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x14002E480 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  __int64 v8; // rax
  unsigned int v9; // edi
  const struct REGION_CORE *v10; // r8
  RGNOBJAPI *v11; // rcx
  RGNOBJ *v13; // rcx
  unsigned int v14; // edx
  const struct REGION_CORE *v15; // r8
  int v16; // esi
  int v17; // edi
  __int64 v18; // [rsp+28h] [rbp-69h] BYREF
  _QWORD v19[7]; // [rsp+30h] [rbp-61h] BYREF
  _QWORD v20[7]; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v21[7]; // [rsp+A0h] [rbp+Fh] BYREF

  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 != 5 )
    {
      if ( a1 != a2 && a1 != a3 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v21, a2, 1, 0);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a3, 1, 0);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a1, 0, 1);
        if ( v21[0] && v20[0] && v19[0] )
        {
          REGION_CORE::get_sizeScan((REGION_CORE *)(v19[0] + 24LL));
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v18);
          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v18, v14);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v18);
          if ( v18
            && (RGNOBJ::vCopy((RGNOBJ *)&v18, (struct RGNOBJ *)v19, v15),
                (v16 = RGNOBJ::iCombine((RGNOBJ *)&v18, (struct RGNOBJ *)v21, (struct RGNOBJ *)v20, a4)) != 0) )
          {
            v17 = (unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)v19, (struct RGNOBJ *)&v18) != 0 ? v16 : 0;
          }
          else
          {
            v17 = 0;
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
          if ( v17 )
          {
            v9 = RGNOBJ::iComplexity((RGNOBJ *)v19);
            goto LABEL_36;
          }
        }
        else
        {
          EngSetLastError(6u);
        }
        v9 = 0;
LABEL_36:
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
        v11 = (RGNOBJAPI *)v21;
        goto LABEL_17;
      }
      if ( a2 != a3 )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v18);
        RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v18, 0x70u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v18);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a2, 0, a1 == a2);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a3, 0, a1 == a3);
        if ( v18 )
        {
          v8 = v19[0];
          if ( !v19[0] )
          {
LABEL_9:
            EngSetLastError(6u);
LABEL_10:
            v9 = 0;
LABEL_26:
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
            if ( v18 )
              PopThreadGuardedObject(v18 + 80);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
            return v9;
          }
          if ( !v20[0] )
          {
LABEL_7:
            if ( v8 && v20[0] )
              goto LABEL_10;
            goto LABEL_9;
          }
          if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v18, (struct RGNOBJ *)v19, (struct RGNOBJ *)v20, a4) )
          {
            if ( a1 == a2 )
            {
              if ( !(unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)v19, (struct RGNOBJ *)&v18) )
                goto LABEL_10;
              v13 = (RGNOBJ *)v19;
            }
            else
            {
              if ( !(unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)v20, (struct RGNOBJ *)&v18) )
                goto LABEL_10;
              v13 = (RGNOBJ *)v20;
            }
            v9 = RGNOBJ::iComplexity(v13);
            goto LABEL_26;
          }
        }
        v8 = v19[0];
        goto LABEL_7;
      }
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a1, 0, 1);
      if ( v19[0] )
      {
        if ( (unsigned int)(a4 - 3) <= 1 )
          RGNOBJ::vSet((RGNOBJ *)v19);
        v9 = RGNOBJ::iComplexity((RGNOBJ *)v19);
      }
      else
      {
        EngSetLastError(6u);
        v9 = 0;
      }
LABEL_16:
      v11 = (RGNOBJAPI *)v19;
LABEL_17:
      RGNOBJAPI::~RGNOBJAPI(v11);
      return v9;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a1, 0, 1);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v20, a2, 1, 0);
    if ( v20[0] && v19[0] )
    {
      if ( (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v19, (struct RGNOBJ *)v20, v10) )
      {
        v9 = RGNOBJ::iComplexity((RGNOBJ *)v19);
        goto LABEL_15;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    v9 = 0;
LABEL_15:
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v20);
    goto LABEL_16;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
