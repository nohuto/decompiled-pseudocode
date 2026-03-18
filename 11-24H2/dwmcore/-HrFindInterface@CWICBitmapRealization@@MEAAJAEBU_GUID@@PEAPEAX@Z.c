/*
 * XREFs of ?HrFindInterface@CWICBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D94D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapRealization::HrFindInterface(
        CWICBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v6 )
      goto LABEL_8;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
    if ( v7 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICDecoderBitmapSource.Data4;
      if ( v8 )
        return (unsigned int)-2147467262;
      v12 = 0LL;
      v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
      if ( !v9 || (**v9)(v9, &IID_IWICDecoderBitmapSource, &v12) < 0 )
      {
        return (unsigned int)-2147467262;
      }
      else
      {
        v5 = 0;
        v10 = v12;
        *a3 = (void *)(((unsigned __int64)this + 88) & -(__int64)(this != 0LL));
        ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v10);
      }
    }
    else
    {
LABEL_8:
      *a3 = (void *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL));
      return 0;
    }
  }
  return v5;
}
