/*
 * XREFs of ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1400671D0
 * Callers:
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1400671D0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 * Callees:
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001971C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1400262A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140026760 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14002689C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1400671D0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1400673D0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z @ 0x1400689C4 (-RegionCore_set_to_rectls@Win32kRS@@YAHPEAVREGION_CORE@@_KPEBU_RECTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bSet(RGNOBJ *this, unsigned int a2, struct _RECTL *a3, const struct _RECTL *a4)
{
  struct _RECTL *v4; // rbx
  __int64 v5; // rdi
  int v8; // esi
  int right; // ecx
  int top; // edx
  int bottom; // r8d
  unsigned int v12; // esi
  unsigned int v13; // edi
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v4 = a3;
  v5 = a2;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    return Win32kRS::RegionCore_set_to_rectls(
             (Win32kRS *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)),
             (struct REGION_CORE *)a2,
             (unsigned __int64)a3,
             a4);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v14);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v16);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v16, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
  if ( !v14 || !v16 )
  {
LABEL_3:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
    return 0LL;
  }
  if ( (unsigned int)v5 < 0x14 )
  {
    v8 = 0;
    if ( (_DWORD)v5 )
    {
      do
      {
        right = v4->right;
        if ( v4->left < right )
        {
          top = v4->top;
          bottom = v4->bottom;
          if ( top < bottom && top >= -134217728 && bottom <= 0x7FFFFFF && v4->left >= -134217728 && right <= 0x7FFFFFF )
          {
            if ( v8 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v14, v4);
              RGNOBJ::iCombine((RGNOBJ *)&v16, this, (struct RGNOBJ *)&v14, 2);
              RGNOBJ::vSwap(this, (struct RGNOBJ *)&v16);
            }
            else
            {
              RGNOBJ::vSet(this, v4);
              v8 = 1;
            }
          }
        }
        ++v4;
        --v5;
      }
      while ( v5 );
    }
    goto LABEL_17;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v15);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v15, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
  v12 = (unsigned int)v5 >> 1;
  v13 = v5 - ((unsigned int)v5 >> 1);
  if ( !v15
    || !(unsigned int)RGNOBJ::bSet((RGNOBJ *)&v14, v12, v4)
    || !(unsigned int)RGNOBJ::bSet((RGNOBJ *)&v16, v13, &v4[v12]) )
  {
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
    goto LABEL_3;
  }
  RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v14, 2);
  RGNOBJ::vSwap(this, (struct RGNOBJ *)&v15);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
LABEL_17:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
  return 1LL;
}
