/*
 * XREFs of ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1400FFE44
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1401018E0 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400B419C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400FFFB0 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x140100040 (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall QueryFontTreeRequest::CaptureGlyphSet(QueryFontTreeRequest *this)
{
  char *v1; // rsi
  unsigned int v3; // r12d
  unsigned __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // eax
  char *v9; // rax
  char *v10; // rbx
  unsigned __int16 *v11; // r8
  unsigned int v12; // r10d
  unsigned int i; // r11d
  unsigned __int64 v14; // rdx
  int v15; // r9d
  unsigned __int64 v16; // rcx
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+10h] BYREF

  v1 = (char *)*((_QWORD *)this + 11);
  if ( v1 )
  {
    v18 = 0;
    v17 = 0;
    if ( QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(this, &v18, &v17) )
    {
      v3 = v17;
      v4 = (unsigned __int64)&v1[16 * v17 + 16];
      if ( v4 >= (unsigned __int64)(v1 + 16) )
      {
        v5 = v18;
        if ( v18 >= 16 * ((unsigned __int64)v17 + 1) )
        {
          v6 = (__int64 *)*((_QWORD *)this + 8);
          LOBYTE(v17) = 0;
          v7 = *v6;
          v8 = (**(__int64 (__fastcall ***)(QueryFontTreeRequest *))this)(this);
          v9 = UmfdAllocation::ObtainKernelmodeAllocation(
                 v8,
                 v7,
                 v1,
                 v5,
                 &v17,
                 (__int64)QueryFontTreeRequest::TryGlyphSetHasSameContent);
          if ( v9 )
          {
            if ( (_BYTE)v17 )
            {
              *(_DWORD *)v9 = v5;
              v10 = &v1[v5];
              *((_DWORD *)v9 + 3) = v3;
              v11 = (unsigned __int16 *)(v9 + 18);
              v12 = 0;
              for ( i = 0; i < v3; ++i )
              {
                v14 = *(_QWORD *)(v11 + 3);
                v15 = *v11;
                if ( v14 )
                {
                  if ( !(_WORD)v15 )
                    goto LABEL_14;
                  if ( v14 < v4 )
                    goto LABEL_14;
                  if ( v14 >= (unsigned __int64)v10 )
                    goto LABEL_14;
                  v16 = v14 + 4LL * *v11;
                  if ( v16 < v14 )
                    goto LABEL_14;
                  if ( v16 > (unsigned __int64)v10 )
                    goto LABEL_14;
                  *(_QWORD *)(v11 + 3) = &v9[v14 - (_QWORD)v1];
                  if ( v12 + v15 < v12 )
                    goto LABEL_14;
                  v12 += v15;
                }
                else if ( (_WORD)v15 )
                {
                  goto LABEL_14;
                }
                v11 += 8;
              }
              if ( v12 != *((_DWORD *)v9 + 2) )
              {
LABEL_14:
                UmfdAllocation::ReleaseKernelmodeAllocation(v9);
                return;
              }
            }
            *((_QWORD *)this + 9) = v9;
          }
        }
      }
    }
  }
}
