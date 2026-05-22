/*
 * XREFs of ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1801CD260
 * Callers:
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ @ 0x1801CCA68 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ.c)
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x18019CA38 (McTemplateU0sqq_EventWriteTransfer.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801CB61C (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SharedMessagePortRefPtr::Initialize(_QWORD *a1)
{
  PSECURITY_DESCRIPTOR v2; // r14
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 (__fastcall *v8)(__int64, unsigned __int64, PSECURITY_DESCRIPTOR, _QWORD *); // r11
  const wchar_t *v9; // rax
  const wchar_t *v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-10h]
  ULONG_PTR retaddr; // [rsp+78h] [rbp+28h]
  __int64 v18; // [rsp+90h] [rbp+40h] BYREF
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v2 = 0LL;
  v3 = CoreUIClientCreate(&v19);
  v6 = v3;
  if ( v3 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_24;
    v7 = 116LL;
    goto LABEL_4;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 48LL))(v19, &v18);
  v6 = v3;
  if ( v3 >= 0 )
  {
    SecurityDescriptor = 0LL;
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-419202837"
             "2-3968301570-1997628692-1435953622)",
            1u,
            &SecurityDescriptor,
            0LL) )
      FailFastWithHR(-2147467259, retaddr, 0xF3uLL);
    v2 = SecurityDescriptor;
    SecurityDescriptor = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, unsigned __int64, PSECURITY_DESCRIPTOR, _QWORD *))(*(_QWORD *)v18 + 24LL);
    v9 = L"Input\\Core.AlpcPort\\Server";
    if ( L"Input\\Core.AlpcPort\\Server" )
    {
      v10 = L"Input\\Core.AlpcPort\\Server";
      v16 = L"Input\\Core.AlpcPort\\Server";
      v11 = 0;
      while ( *v9 )
      {
        ++v9;
        ++v11;
      }
      v15 = v11 | 0x80000000;
    }
    else
    {
      v10 = 0LL;
      v16 = 0LL;
    }
    v3 = v8(v18, (unsigned __int64)&v15 & -(__int64)(v10 != 0LL), v2, a1 + 1);
    v6 = v3;
    if ( v3 >= 0 )
    {
      v12 = v18;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      if ( *a1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1 = v12;
    }
    else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    {
      v7 = 127LL;
      goto LABEL_4;
    }
  }
  else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v7 = 119LL;
LABEL_4:
    McTemplateU0sqq_EventWriteTransfer(v5, v4, "SharedMessagePortRefPtr::Initialize", v7, v3);
  }
LABEL_24:
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v19 = 0LL;
  }
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v18 = 0LL;
  }
  LocalFree(v2);
  return v6;
}
