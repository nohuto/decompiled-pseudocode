/*
 * XREFs of ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18017E444
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18017DA3C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18017DD60 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x18017E2C0 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18017E8B8 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18017F278 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

_BYTE **__fastcall Path::SegmentCollection::const_iterator::operator++(_BYTE **a1)
{
  __int64 v1; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( **a1 )
  {
    case 0:
      goto LABEL_9;
    case 1:
      v1 = 8LL;
      break;
    case 2:
LABEL_9:
      v1 = 16LL;
      break;
    case 3:
      v1 = 28LL;
      break;
    case 4:
      v1 = 24LL;
      break;
    case 5:
      v1 = 32LL;
      break;
    default:
      ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  *a1 += v1;
  return a1;
}
