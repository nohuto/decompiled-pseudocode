/*
 * XREFs of PiUEventCacheObjectProperties @ 0x140A16710
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1409ECA04 (PiUEventNotifyUserMode.c)
 * Callees:
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventCacheObjectProperties(__int64 a1)
{
  int v1; // edx
  const wchar_t *v2; // r15
  PVOID *v3; // r14
  void *v4; // rsi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  WCHAR *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  int ObjectProperty; // eax
  int v15; // edx
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+50h] BYREF

  v1 = *(_DWORD *)(a1 + 96);
  v2 = (const wchar_t *)(a1 + 60);
  *(_DWORD *)(a1 + 60) = -1;
  v3 = (PVOID *)(a1 + 48);
  LODWORD(v16) = 0;
  v4 = 0LL;
  LODWORD(v17) = 0;
  v18 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v5 = v1 - 1;
  if ( !v5 )
  {
LABEL_5:
    v9 = (WCHAR *)(a1 + 128);
    goto LABEL_6;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v15 = v8 - 5;
        if ( v15 )
        {
          if ( (unsigned int)(v15 - 1) >= 2 )
            return 0;
        }
      }
    }
    goto LABEL_5;
  }
  ObjectProperty = PnpGetObjectProperty(
                     0x59706E50u,
                     0xC8u,
                     (WCHAR *)(a1 + 144),
                     3u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (int *)&v16,
                     (PVOID *)&v18,
                     (unsigned int *)&v17,
                     0);
  v4 = (void *)v18;
  v11 = ObjectProperty;
  if ( ObjectProperty < 0 )
    goto LABEL_10;
  v9 = (WCHAR *)v18;
LABEL_6:
  v10 = PnpGetObjectProperty(
          0x59706E50u,
          0x200u,
          v9,
          1u,
          0LL,
          0LL,
          (__int64)&DEVPKEY_Device_EffectiveRestrictedSD,
          (int *)&v16,
          v3,
          (unsigned int *)&v17,
          0);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( (_DWORD)v16 != 19 )
    {
      ExFreePoolWithTag(*v3, 0x59706E50u);
      *v3 = 0LL;
    }
    goto LABEL_8;
  }
  if ( v10 == -1073741275 || v10 == -1073741772 )
  {
LABEL_8:
    v12 = PnpGetObjectProperty(
            *(_QWORD **)&PiPnpRtlCtx,
            v9,
            1u,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_SessionId,
            &v16,
            v2,
            4u,
            (__int64)&v17,
            0);
    v11 = v12;
    if ( v12 == -1073741275 || v12 == -1073741772 )
      v11 = 0;
  }
LABEL_10:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x59706E50u);
  return v11;
}
