/*
 * XREFs of LogPagingOperation @ 0x1400BCAB0
 * Callers:
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEA_KPEAX@Z @ 0x1400BC5E0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@QEAA_NKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 * Callees:
 *     McTemplateK0pptpqxqqppqqxxpqxp_EtwWriteTransfer @ 0x14003C800 (McTemplateK0pptpqxqqppqqxxpqxp_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpxx_EtwWriteTransfer @ 0x14003EE5C (McTemplateK0pptpqxpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxqt_EtwWriteTransfer @ 0x1400402FC (McTemplateK0pptpqxxqt_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxx_EtwWriteTransfer @ 0x140041F18 (McTemplateK0pptpxxqqxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqqx_EtwWriteTransfer @ 0x1400425E8 (McTemplateK0pptpqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer @ 0x140043FDC (McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxq_EtwWriteTransfer @ 0x1400446A4 (McTemplateK0pptpqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpx_EtwWriteTransfer @ 0x140045228 (McTemplateK0pptpqxpx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxt_EtwWriteTransfer @ 0x1400456A8 (McTemplateK0pptpqxxt_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer @ 0x140046498 (McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxq_EtwWriteTransfer @ 0x1400465E4 (McTemplateK0pptpqxqxqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxpq_EtwWriteTransfer @ 0x140046724 (McTemplateK0pptpxxpq_EtwWriteTransfer.c)
 *     McTemplateK0pptpxqqx_EtwWriteTransfer @ 0x140046804 (McTemplateK0pptpxqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxx_EtwWriteTransfer @ 0x140047540 (McTemplateK0pptpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptqx_EtwWriteTransfer @ 0x140047600 (McTemplateK0pptqx_EtwWriteTransfer.c)
 */

void __fastcall LogPagingOperation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        _DWORD *a7)
{
  char v7; // r10
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // r8

  v7 = a2;
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v8 = *(_DWORD *)(a4 + 28);
    if ( v8 == 11 )
    {
      v9 = *(unsigned int *)(a4 + 120);
      LOBYTE(v10) = 0;
      if ( (unsigned int)v9 > 1 )
      {
        if ( (_DWORD)v9 == 2 )
        {
          v11 = *(_QWORD *)(a4 + 64);
          v10 = *(_DWORD *)(a4 + 56);
        }
        else
        {
          v11 = 0LL;
        }
      }
      else
      {
        v11 = *(_QWORD *)(a4 + 56);
      }
      McTemplateK0pptpqxqqppqqxxpqxp_EtwWriteTransfer(
        a5,
        v9,
        v11,
        a1,
        v7,
        a5,
        *(_QWORD *)(a4 + 48),
        *(_DWORD *)(a4 + 40),
        v11,
        v10,
        *(_DWORD *)(a4 + 84),
        *(_QWORD *)(a4 + 72),
        *(_QWORD *)(a4 + 128),
        *(_DWORD *)(a4 + 80),
        *(_DWORD *)(a4 + 92),
        *(_QWORD *)(a4 + 96),
        *(_QWORD *)(a4 + 104),
        *(_QWORD *)(a4 + 112),
        v9,
        *(_QWORD *)(a4 + 136),
        (char)a7);
    }
    else if ( v8 == 12 )
    {
      McTemplateK0pptpqxpxx_EtwWriteTransfer(
        a5,
        a2,
        a3,
        a1,
        a2,
        a5,
        a3,
        *(_DWORD *)(a4 + 40),
        *(_QWORD *)(a4 + 48),
        *(_QWORD *)(a4 + 56),
        *(_QWORD *)(a4 + 64),
        *(_QWORD *)(a4 + 72));
    }
    else
    {
      switch ( v8 )
      {
        case 0:
          McTemplateK0pptpqxqxqxq_EtwWriteTransfer(
            a5,
            0x140000000LL,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_DWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *(_DWORD *)(a4 + 64),
            *(_QWORD *)(a4 + 72),
            *(_DWORD *)(a4 + 80),
            *(_QWORD *)(a4 + 88),
            *(_DWORD *)(a4 + 96));
          break;
        case 1:
          McTemplateK0pptpxqqx_EtwWriteTransfer(
            a5,
            0x140000000LL,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_QWORD *)(a4 + 48),
            *(_DWORD *)(a4 + 56),
            *(_DWORD *)(a4 + 64),
            *(_QWORD *)(a4 + 72));
          break;
        case 2:
          McTemplateK0pptpqqx_EtwWriteTransfer(
            a5,
            0x140000000LL,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_DWORD *)(a4 + 48),
            *(_DWORD *)(a4 + 52),
            *(_QWORD *)(a4 + 56));
          break;
        case 3:
          McTemplateK0pptqx_EtwWriteTransfer(
            a5,
            (const EVENT_DESCRIPTOR *)"8",
            a3,
            a1,
            a2,
            a5,
            *(_DWORD *)(a4 + 40),
            *(_QWORD *)(a4 + 48));
          break;
        case 4:
          McTemplateK0pptqx_EtwWriteTransfer(
            a5,
            &EventPagingOpWritePhysical,
            a3,
            a1,
            a2,
            a5,
            *(_DWORD *)(a4 + 40),
            *(_QWORD *)(a4 + 48));
          break;
        case 5:
          McTemplateK0pptpqxxqt_EtwWriteTransfer(
            a5,
            (const EVENT_DESCRIPTOR *)":",
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_DWORD *)(a4 + 56),
            *(_QWORD *)(a4 + 64),
            *(_QWORD *)(a4 + 72),
            *(_DWORD *)(a4 + 88),
            a6);
          break;
        case 6:
          McTemplateK0pptpqxxt_EtwWriteTransfer(
            a5,
            0x140000000LL,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_DWORD *)(a4 + 56),
            *(_QWORD *)(a4 + 64),
            *(_QWORD *)(a4 + 72),
            a6);
          break;
        case 7:
          McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer(
            a5,
            0x140000000LL,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_DWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *(_DWORD *)(a4 + 64),
            *(_QWORD *)(a4 + 72),
            *(_DWORD *)(a4 + 80),
            *(_QWORD *)(a4 + 88),
            *(_DWORD *)(a4 + 96),
            *(_DWORD *)(a4 + 100),
            *(_DWORD *)(a4 + 104));
          break;
        case 8:
          McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer(
            (__int64)a7,
            a5,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_QWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *a7,
            a7[1],
            *(_QWORD *)(a4 + 64),
            *(_QWORD *)(a4 + 72),
            *(_QWORD *)(a4 + 80),
            *(_DWORD *)(a4 + 88),
            *(_DWORD *)(a4 + 92),
            *(_QWORD *)(a4 + 96),
            *((_QWORD *)a7 + 1),
            *((_QWORD *)a7 + 2));
          break;
        case 9:
          McTemplateK0pptpxxqqxx_EtwWriteTransfer(
            (__int64)a7,
            a5,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_QWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *(_DWORD *)(a4 + 64),
            *a7,
            *(_QWORD *)(a4 + 72),
            *((_QWORD *)a7 + 1));
          break;
        case 10:
          McTemplateK0pptpqxpx_EtwWriteTransfer(
            a5,
            0x140000000LL,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_DWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *(_QWORD *)(a4 + 64),
            *(_QWORD *)(a4 + 72));
          break;
        case 13:
          McTemplateK0pptpxxpq_EtwWriteTransfer(
            a5,
            0x140000000LL,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_QWORD *)(a4 + 40),
            *(_QWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *(_DWORD *)(a4 + 64));
          break;
        case 15:
          McTemplateK0pptpqxq_EtwWriteTransfer(
            a5,
            0x140000000LL,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_DWORD *)(a4 + 48),
            *(_QWORD *)(a4 + 56),
            *(_DWORD *)(a4 + 64));
          break;
        case 16:
          McTemplateK0pptpxx_EtwWriteTransfer(
            a5,
            0x140000000LL,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_QWORD *)(a4 + 40),
            *(_QWORD *)(a4 + 48));
          break;
        case 17:
          McTemplateK0pptpqxxqt_EtwWriteTransfer(
            a5,
            &EventPagingOpMapApertureSegment2,
            a3,
            a1,
            a2,
            a5,
            a3,
            *(_DWORD *)(a4 + 56),
            *(_QWORD *)(a4 + 64),
            *(_QWORD *)(a4 + 72),
            *(_DWORD *)(a4 + 96),
            a6);
          break;
        default:
          return;
      }
    }
  }
}
