/*
 * XREFs of Upgrade64KBWork @ 0x140098C60
 * Callers:
 *     ?VidMmUpgrade64KBWork@@YAXPEAX@Z @ 0x140099080 (-VidMmUpgrade64KBWork@@YAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x14003F6CC (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x14004A940 (McTemplateK0qq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 */

LONG __fastcall Upgrade64KBWork(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KEVENT *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-49h]
  _DWORD v11[2]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp-31h]
  _DWORD v13[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14; // [rsp+48h] [rbp-21h]
  __int64 v15; // [rsp+50h] [rbp-19h]
  __int64 v16; // [rsp+58h] [rbp-11h]
  _QWORD v17[10]; // [rsp+60h] [rbp-9h] BYREF

  v1 = *(_QWORD *)(a1 + 5360);
  if ( v1 )
  {
    memset(v17, 0, 0x48uLL);
    v11[1] = 0;
    v12 = v17;
    v11[0] = 1;
    ZwManagePartition(-2LL, 0LL, 7LL, v11, 16);
    if ( v17[3] + v17[4] < v1 )
    {
      v5 = v1 - (v17[3] + v17[4]);
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0_EtwWriteTransfer(v3, &LargePageUpgrade_CreatePagesStart, v4);
      v13[0] = 0;
      v16 = 0LL;
      v13[1] = 0;
      v15 = 2 * v5;
      v14 = 0x10000LL;
      if ( (int)ZwManagePartition(-2LL, 0LL, 8LL, v13, 32) < 0 )
      {
        WdLogSingleEntry1(3LL, v15);
        v15 = 0LL;
        v16 = 0LL;
        WdLogGlobalForLineNumber = 108;
      }
      if ( (byte_140081241 & 1) != 0 )
      {
        LODWORD(v10) = v16;
        McTemplateK0qq_EtwWriteTransfer(v6, &LargePageUpgrade_CreatePagesEnd, v7, v15, v10);
      }
      *(_QWORD *)(a1 + 5368) = v16;
    }
  }
  v8 = *(struct _KEVENT **)(a1 + 24);
  *(_BYTE *)(a1 + 5352) = 0;
  return KeSetEvent(v8, 0, 0);
}
